//summing digit
#include <iostream>
using namespace std;

int f(int n){
	int ans=0;
	while(n>0){//step02:bo pi fa
		ans+=n%10;
		n=n/10;
	}
	return ans;
}
int main(){
	int n;
	while(cin >> n){//step01:Input
		if(n==0) break;
		n=f(n);//step03:Function call*3
		cout<<n<<endl;
	}
}