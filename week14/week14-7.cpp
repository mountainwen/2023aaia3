//Divide, But Not Quite Conquer!
# include <iostream>
using namespace std;
int main()
{
    int a,b; //step01:input
    while(cin >> a >> b){
        
        if(b==1){//step06: special case
        	cout << "Boring!\n";
        	continue;
        }
        int bad=0,backup=a;//step05 backup
        while(a>1){
        	
            if(a%b>0) bad=1;//step04 bad
            a=a/b;
            
        } //step04 bad
        if(bad==1) cout <<"Boring!\n";
        else{
            a=backup;//step05 backup
            while(a>1){//step03 bo pi fa
                cout << a << " ";
                a=a/b;
            }
        cout<<"1\n";
        }//step02 output 
    }

}