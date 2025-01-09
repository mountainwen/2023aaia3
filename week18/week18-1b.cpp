//leetcode counting-words-with-a-given-prefix
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        int L = pref.length();//字的長度
        for(string word:words){//對words的所有的字
            
            if(pref == word.substr(0,L))ans++;//如果前面的L個字
        }
        return ans;
    }
};