#include<iostream>
using namespace std;
int main(){
    int num;
    int i;
    int a,b;
    cin>>a>>b;
    for(num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                
                break;
            }
        }
        if(num==i){
            cout<<num<<endl;
        }
    }
    return 0;


}
