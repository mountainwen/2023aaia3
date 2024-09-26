//week02-3
//兩個字串,交錯合在一起
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;//宣告一個字串,當答案
        for(int i=0;i<word1.length()||i<word2.length();i++)
        //for迴圈,只要有一個字串長度還沒超過,就繼續
        {
            if(i<word1.length()) ans += word1[i];//增加1個字母
            if(i<word2.length()) ans += word2[i];//增加1個字母
        }
       return ans;
    }
};