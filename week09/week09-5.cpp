//count odd numbers in an interval range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans =(high-low)/2;//這個好像是答案,但有時小些
        if(low%2==1||high%2==1) ans++;//如果頭尾有單數要再加一個數
        return ans;
    }
};