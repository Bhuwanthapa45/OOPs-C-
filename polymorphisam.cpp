#include<iostream>
using namespace std;
class A{
  public:
  //fucntion overloading Two functions with sam name
  //function overloading can be achieved only when there are diffefent types or numbers of input argument
  
  void sayHello(){
    cout<<"Eh Whatsup"<<endl;
  }
  void sayHello(string name){
    cout<<"Eh Whatsup"<<name<<endl;
  }
};
int main(){
    A obj;
    obj.sayHello();
    
    return 0;
}