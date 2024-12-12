//Divide, But Not Quite Conquer! : not finish
#include <iostream>
using namespace std;

int main()
{
	int a,b;//step 01:input 
	while(cin >> a >> b){//step03: bo pi fa
		while(a>0){
			cout << a << " ";
			a=a/b;
		}
		cout<<"Boring!\n";
	}//step02: output
	
}