#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<=mid){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid=(start+end)/2;
       
    }
     return ans;
}
    int LastOcc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<=mid){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid=(start+end)/2;
       

}
 return ans;
    }
int main(){
    int odd[16]={1,2,3,4,5,5,5,5,5,5,6,7};
    cout<<firstOcc(odd,16,5)<<endl;
    cout<<LastOcc(odd,16,5)<<endl;
    
    return 0;

}
