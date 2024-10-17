#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> a;//step3 vector array
	int now;
	while(cin >> now) //step1:input
	{
		a.push_back(now);//step3 vector array 
		for(int b : a) cout << b << ' ';
		cout << "\n";//step4 print array
		//cout << now << "\n";//step2:output
	}
}
