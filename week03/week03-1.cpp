///week 03-1 了解"文法糖" range-based for 迴圈 在2011的c++才能用!
///warning: range-based 'for' loops only available with -std=c++11 or -std=gnu++11
///CodeBlocks-Setting-Compiler 把 -std=c++11 的 2011年的C++開起來
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char c : s){
        cout << c << "\n";
    }
}
