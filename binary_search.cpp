#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
    for(int i=0;i<n;i++){
        if(arr[mid]==key){
            cout<<"The key element is found at  position  "<<  mid+1<<endl;
        }
    if(arr[mid]<key){
        start=mid+1;

    }
    else{
        end=mid-1;
    } 
    mid=(start+end)/2;   
    }
    
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[6]={1,3,5,7,9,11};
    binary_search(even,6,8);
    return 0;


}
