#include<iostream>
using namespace std;
class add{
 public:
 int sum(int num1,int num2){
    return num1+num2;

 }  
 int sum(int num1,int num2,int num3) {
    return num1+num2+num3;

 }


};

int main(){
    add ad;

    cout<<"Output is  "<<ad.sum(10,50)<<endl;
    cout<<"Output is  "<<ad.sum(20,10,40);
    return 0;
}
