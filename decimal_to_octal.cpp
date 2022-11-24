#include<bits/stdc++.h>
using namespace std;
int decimalToOctal(int n){
    int a[10];
    int i=0;
    int j;

    for(i=0;n>0;i++){
        int rem=n%8;
        n=n/8;
        a[i]=rem;

        
    }
    for( int j=i-1;j>=0;j--){
        cout<<a[j];
    }
    return a[j];
}
int main(){
    int n;
    cin>>n;
    cout<<decimalToOctal(n);
    return 0;

}
