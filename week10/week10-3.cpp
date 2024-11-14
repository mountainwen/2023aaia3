///進階的class裡面有建構函式,資料,方法
#include <iostream>
#include <string>
using namespace std;

class Cat{///貓的類別
public:
    Cat(string _name){///小心底線(_) 前面不能寫void
        name = _name;
    }
    string name; ///變數,資料
    void print(){///函式,方法
        cout << "I am a cat.My name is"<<name<<".\n";

    }
};
int main(){

    Cat cat1("小花"),cat2("小白");

    cat1.print();
    cat2.print();

}

