//leetcode Pow(x,n)未完
class Solution {
public:
    double helper(double x, int n){
        if(n==0) return 1;
        //if(n==1) return x;
        double now = helper(x,n/2);
        if(n%2==0)return now*now;
        else return now*now*x;
    } 
    double myPow(double x, int n) {
        double ans=1;
        if(n<0){//遇到負的會失敗,所以要把n變正的
            n=-n;
            x=1/x;
        }
        
        return helper(x,n);
    }
};