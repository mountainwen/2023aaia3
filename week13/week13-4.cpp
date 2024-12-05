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
    sort(A.begin(), A.end());//step04:aort 排大小
    sort(B.begin(), B.end());
    int ans=0;
    for(int i=0;i<A.size();i++){//step03:output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << "答案是:" << ans;
}