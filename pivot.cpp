#include<iostream>
using namespace std;
int pivotelement(int arr[],int n){
    int sum=0;
   for(int i=0;i<n;i++)
    {
        sum+=arr[i];

    }

    int lsum=0;
    int rsum=sum;
  for(int i=0;i<n;i++){
    rsum=rsum-arr[i];
    if(lsum==rsum){
        return i;

    }
    lsum+=arr[i];
  } 
  return -1; 
}
int main(){
    int arr[6]={3,7,1,6,5,6};
    cout<<arr[pivotelement(arr,6)];
    return 0;
}
