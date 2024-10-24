class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout << board[i][j] << " ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    bool myTestWin(int board[3][3],int now){
        if(board[0][0] ==now && board[0][1]==now && board[0][2]==now) return true; //上面橫
        if(board[1][0] ==now && board[1][1]==now && board[1][2]==now) return true; //中面橫
        if(board[2][0] ==now && board[2][1]==now && board[2][2]==now) return true; //下面橫
        if(board[0][0] ==now && board[1][0]==now && board[2][0]==now) return true; //左直線
        if(board[0][1] ==now && board[1][1]==now && board[2][1]==now) return true; //中直線
        if(board[0][2] ==now && board[1][2]==now && board[2][2]==now) return true; //右直線
        if(board[0][0] ==now && board[1][1]==now && board[2][2]==now) return true; //左上右下
        if(board[2][0] ==now && board[1][1]==now && board[0][2]==now) return true; //右上左下
        return false;//都沒成功
    }//要看看,誰連線成功
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};//裡面都放0
        int now = 1 ;//第一個下的人,叫1:"A",2:"B"
        for(auto move:moves){//用auto它會幫妳寫好
            int i=move[0],j=move[1];
            board[i][j]=now;//改成now
            //myPrintBoard(board);
            if( myTestWin(board,now)){//要看看,誰連線成功
                if (now==1) return "A";
                else return "B";
            }
            now=3-now;//1變2,2變1
        }
        if(moves.size()==9) return "Draw";//平局
        else return "Pending";
    }
};