//matrix diagonal sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M=mat.size();
        int ans=0;
        for(int i=0;i<M;i++){
            ans+=mat[i][i];//左上,右下
            ans+=mat[i][M-1-i];//右下,左上
        }
        //單數時,要扣掉中間
        if(M%2==1) ans-=mat[M/2][M/2];
        return ans;
    }
};