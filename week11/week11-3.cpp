///hash map的強處
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){///大二上[資結演算法]教的 hash map 雜湊表
    unordered_map<string,int> m;///又小又快
    m["黃詰琳"]=12750432;///左邊放字串,右邊放int 整數
    m["陳昱蓁"]=12750954;
    cout << "黃詰琳的學號是:"<<m["黃詰琳"]<<endl;
    cout << "陳昱蓁的學號是:"<<m["陳昱蓁"]<<endl;
}
