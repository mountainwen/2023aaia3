///要叫類別class
#include <iostream>
using namespace std;
class Cat{///貓的類別
public:
    void print(){
        cout << "I am a cat.meow meow\n";

    }
};
class Mouse{
public:
    void print(){
        cout << "I am a mouse.chi chi\n";
    }
};
int main(){
    Cat cat1,cat2;///cat1 cat2 都是Cat
    cat1.print();
    cat2.print();
    Mouse mouse1,mouse2;
    mouse1.print();
    mouse2.print();
}
