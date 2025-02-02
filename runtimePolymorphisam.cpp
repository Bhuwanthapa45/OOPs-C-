#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};
class Dog : public Animal{
public:
 void speak(){
     //This is called method overridding or fucntion overridding as the name 
     //of the function is same but the content as been overridden
        cout<<"Barking"<<endl;
    }

};

int main(){
    Dog Tommy;
    Tommy.speak();
    return 0;
}