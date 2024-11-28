///想了解Linked List 的 Node
///比較之前學過的 class v.s. struct
#include <iostream>
using namespace std;
///struct Node {};///你打好大括號,就會生下括號，分號
///class Cat {};///你打好大括號,就會生下括號，分號
struct Node {
    int val;///value 值
};
class Cat{
    public:
        string name;
};
int main(){
    Cat cat1;///大寫的形狀,宣告小寫的變數
    cat1.name = "Kitty";
    Node node;
    node.val = 1;
}///執行時,沒Compile Error即可(程式只放入資料,什麼都不做)
