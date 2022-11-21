#include<iostream>
using namespace std;
class abt{
    private:

    int num;
    char ch;
 public:
 void setValue(int n,char c){
     num=n;
     ch=c;
 }
 void getValue(){
    cout<<"Number is "<<num<<endl;
    cout<<"Character is"<<ch<<endl;

 }


 };
 int main(){
    abt ab;
    ab.setValue(100,'F');
    ab.getValue();
    return 0;

 }
