///進階的class裡面有資料,方法
#include <iostream>
#include <string>
using namespace std;

class Cat{///貓的類別
public:
    string name;
    void print(){
        cout << "I am a cat.My name is"<<name<<"\n";

    }
};
int main(){
    Cat cat1,cat2;///cat1 cat2 都是Cat
    cat1.name="小花";
    cat2.name="小白";
    cat1.print();
    cat2.print();

}
