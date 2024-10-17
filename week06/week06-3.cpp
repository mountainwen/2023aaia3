//week06-3.cpp
class Solution {
public:
    bool judgeCircle(string moves) {
        int x =0, y = 0;//開始在(0,0)的位置
        for(char c : moves){//針對每一個移動的字母
            if(c=='U') y++;//上
            if(c=='D') y--;//下
            if(c=='R') x++;//右
            if(c=='L') x--;//左
        }
        if(x==0 && y==0) return true;//還留在(0,0)就成功
        else return false;
    }
};