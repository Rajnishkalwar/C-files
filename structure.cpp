#include<iostream>
using namespace std;
struct person{
    char name[20];
    int age;
    float salary;
    char city[20];
};
int main(){
    person p1;
    cout<<"Enter your name"<<endl;
    cin>>p1.name;

    cout<<"Enter your age\n";
    cin>>p1.salary;
    cout<<"Enter your city\n";
    cin>>p1.city;
    cout<<"Display Information"<<endl;
    cout<<"name  "<<p1.name<<endl;
    cout<<"age  "<<p1.age<<endl;
    cout<<"salary  "<<p1.salary<<endl;
    cout<<"city  "<<p1.city<<endl;


    return 0;



}
