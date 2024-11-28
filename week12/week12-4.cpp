//symmetric matrix(未完)
#include <iostream>
using namespace std;
int a[100][100];//step03: 2D Array
int main(){
	int T,N;
	cin >> T;//step01 : input 
	for (int t=1;t<=T; t++){
		char c,c2;//'N' '=' 3
		cin >> c >> c2 >> N; //step01 : input 
		for(int i=0;i<N; i++){
			for(int j=0; j<N; j++){
				cin >> a[i][j]; //Step03: 2D Array
			}
		}
		
		cout << "Test #" << t << ": Symmetric.\n";
		
	}//step02:output
}