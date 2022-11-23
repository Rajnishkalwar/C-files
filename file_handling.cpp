#include<iostream>
#include<fstream>
using namespace std; 
int main(){
fstream new_file;
new_file.open("new_file",ios::out);
if(!new_file){
    cout<<"file creation failed";

}
else{
    cout<<"new file is created";
    new_file<<"Hello C++";
    new_file.close();
}
return 0;


}
