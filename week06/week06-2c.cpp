#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <int> a;//step3 vector array
	int now;
	while(cin >> now) //step1:input
	{
		a.push_back(now);//step3 vector array 
		
		sort(a.begin(), a.end());//step5 sort
		int N = a.size();
		if(N%2==1) cout << a[N/2] <<"\n";//step06
		else cout << (a[N/2-1]+a[N/2])/2 <<"\n";//step07
		//for(int b : a) cout << b << ' ';
		//cout << "\n";//step4 print array
		//cout << now << "\n";//step2:output
	}
}
