
#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){      //this function is to check whetherr the book alloation is either possible or not
    //n is the number of books and m is the number of students
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;

            }
            pageSum=arr[i];
        }

    }
    return true;

}
int allocateBooks(int arr[],int n,int m){
        int s=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int e=sum;
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(arr,n,m,mid)){
                ans=mid;
                e=mid-1;

            }
            else{
                s=mid+1;

            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
   int main(){
    int n=4;
    int  m=2;
    int pages[]={10,20,30,40};
    cout<<"The minimum value of the maximum number of pages in book allocation is:"<<allocateBooks(pages,n,m)<<endl;
    return 0;
   }
