#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int bit;
    int ans=0;
    while(n!=0)
    {
        bit=n&1;
        ans=bit*pow(10,i)+ans;
        cout<<ans;
        n=n>>1;
        i++;
        }
    cout<<ans;
}
