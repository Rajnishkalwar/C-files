#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int start=1;
    int row=1;
    while(row<=n){                                                                                                      
        int col=1;
       
        while(col<=n){
                cout<<start<<" ";
                start=start+1;
                col=col+1;
            


            
        }
        cout<<endl;
        row=row+1;

    }
    return 0;
