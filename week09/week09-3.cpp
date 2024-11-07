//set matrix zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M= matrix.size();//左手M
        int N= matrix[0].size();//右手N
        vector<bool> left(M);//放左邊的勾勾有M格
        vector<bool> up(M);//放上面的勾勾有N格
        for(int i=0;i<M;i++){//先用完整的迴圈,檢查全部的0在哪
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){//如果是0,左邊和上面打勾勾
                    left[i]=true;//左邊LEFT[i]打勾勾
                    up[j]=true;//上面up[j]打勾勾
                }
            }
        }
        for(int i=0;i<M;i++){//巡left[i]的值
            if(left[i]==true){
                 for(int j=0;j<N;j++) matrix[i][j]=0;//把整行清0
            }
            
        }
        for(int j=0;j<N;j++){//巡up[j]的值
            if(up[j]==true){
                 for(int i=0;i<M;i++) matrix[i][j]=0;//把整行清0
            }
            
        }
    }
};