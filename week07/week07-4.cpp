class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss>>word){//一直把字讀到word字串裡
            //什麼事都不做
        }
        return word.length();//最後看字串長度
    }
};