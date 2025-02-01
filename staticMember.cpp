#include<iostream>
using namespace std;
class Theoffice{
  //static keywrod make data members belongs to class so that it can be accessed without the objects.
  public:
  static int pam;
  //static function = static function can only access static data memebers and it does not work 
  //with this keyword as this keyword stores address to pointer of the object.
  static int randomStaticFunction(){
    return pam;
  }
};
//we have to initialoze the static members outside the class
int Theoffice :: pam = 5;
int main(){
 cout<< Theoffice :: pam << endl;
 cout<< Theoffice::randomStaticFunction()<<endl;

 return 0;
}