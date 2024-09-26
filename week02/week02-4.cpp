//左邊s,右邊t,右邊多了個字母,不知道放哪裡,找出它!
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256]={}; //陣列,裡面統計字母出現次數,初始直都是0(因有大括號)
        for(char c : s){//針對字串S裡的每個字母C,逐一統一分析
            H[c]++;//增加:多了一個字母c,存在陣列的對應格子裡
        }
        for(char c : t){
            H[c]--;//減少:用到一個字母c,陣列格子裡的資料就變少了
            if (H[c]<0) return c;//如果變成負的,那就不夠用,找到兇手了!
        }
        return ' ';//最後都沒有找到的話,回傳空白的字母' '
    }
};