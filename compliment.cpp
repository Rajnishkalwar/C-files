#include <iostream>
#include<math.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
 
  int n;
  cin>>n;
  while(n!=0)
 {
  int bit=n&1;
  
   
  if(bit==1)
     bit= 0;
   else 
    bit=1;
   
    cout<<bit<<endl;
    n=n>>1;
}


return 0;
}
