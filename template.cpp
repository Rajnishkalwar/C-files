  #include<iostream> 
  using namespace std;
  template <class T>
  T Large(T n1,T n2){
        return(n1>n2)? n1:n2;
        }
  int main(){
    int i1,i2;
    float f1,f2;
    char c1,c2;

    cout<<"enter two integers"<<endl;
    cin>>i1>>i2;
    cout<<Large(i1,i2)<<"Integer"<<endl;

    cout<<"Enter two floating number"<<endl;
    cin>>f1>>f2;
    cout<<Large(f1,f2)<<"Float"<<endl;
    cout<<"Enter two character"<<endl;
    cin>>c1>>c2;
    cout<<Large(c1,c2)<<"Character"<<endl;
    return 0;

  }
