//advent  of code 2024 day1
//input 放在右下角stdin標準輸入區
//#include <iostream>#include <vector> 以幫忙寫好
int main() {
    vector<int> A, B;//2個伸縮自如的陣列
    int a,b;//兩個數
    while(cin>>a>>b){//step01:input
        A.push_back(a);//step03:放到陣列
        B.push_back(b);
    }
    for(int i=0;i<A.size();i++){
        cout << A[i] << " ";
    }
}