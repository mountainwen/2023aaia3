//leetcode Pow(x,n)未完
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n<0){//遇到負的會失敗,所以要把n變正的
            n=-n;
            x=1/x;
        }
        for(int i=0;i<n;i++){
            ans*=x;
        }
        return ans;
    }
};