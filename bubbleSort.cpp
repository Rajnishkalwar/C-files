#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
   for(int i=1;i<=n-1;i++){ //For the number of Iteration
       for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
       }
       
   }
}

