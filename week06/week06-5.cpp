class Solution {
public:
    int maximumSwap(int num) {
        int ans = num;//最簡單的答案,就是本身
        string s = to_string(num);//stoi(反過來)
        //for (int i=0;i<s.length();i++){//中間要用迴圈.更新答案
        //cout << s[i] << ' ';//練習印看看
        //}
        for (int i=0;i<s.length()-1;i++){//左手i
            for (int j=i+1;j<s.length();j++)//右手j
            {
                swap(s[i],s[j]);//交換s[i] s[j] 兩數
                ans=max(ans,stoi(s));//看是否更大,更新
                swap(s[i],s[j]);//交換回來
            }
        }
        return ans;
    }
};