//week03-5.cpp 判斷某個字串,是不是由(重複)做出來的字串
//abcabcabcabc
//abcabcabcabcabcabcabcabc 把它copy兩次
// bcabcabcabcabcabcabcab  頭尾 都 砍掉1個字母
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;//把它copy兩次
        int N = s2.length();//新的長度N
        return s2.substr(1,N-2).find(s) != string :: npos;
    }
};