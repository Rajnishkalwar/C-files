#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[10000];
    int i,j,temp;
    for(i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(i=0,j=n-1;i<n/2;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
      for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }

     
    return 0;
}
