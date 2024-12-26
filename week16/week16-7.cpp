//瘋狂程設 train swapping
#include <iostream>
#include <vector>//step03:vector
using namespace std;
int main()
{
	int T,N;
	cin>>T;//step01:input
	for(int t=0;t<T;t++){
		cin>>N;//step01:input
		vector<int> a(N);//step03:vector
		for(int i=0;i<N;i++){
			cin>>a[i];
		}
		int ans=0;
		//step04:bubble sort
		for(int k=0;k<N;k++){
			for(int i=0;i<N-1;i++){
				if(a[i]>a[i+1]){
					swap(a[i],a[i+1]);
					ans++;
				}
			}
		}
		
		cout<<"Optimal train swapping takes "<<ans <<" swaps."<<endl;
	}//step02:output
	
	
}