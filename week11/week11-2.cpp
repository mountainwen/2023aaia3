///要試一試C++ 2011 C++11的功能
#include <iostream>
#include <vector>
#include <unordered_map>///c++11的功能
///setting 設定 -Compiler 編譯器, 勾c++11

using namespace std;

int main()
{
    vector<int> a;
    unordered_map<int,int>m;///如果用預設的c++98會不行
    m[999]= 13;///hash map 雜湊表,可以快速找到,對應某個值
    m[137]=7;
    cout << "m[999] 的值是"<<m[999]<<endl;
    cout << "m[137] 的值是"<<m[137]<<endl;
    return 0;
}
