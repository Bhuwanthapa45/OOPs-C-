#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    public:
    void bark(){
        cout<<"Aniaml is Barking"<<endl;
    }
};
class Human{
   public:
    int age;
    public:
    void speak(){
        cout<<"Human is Speaking"<<endl;
    }
};
//Class for multiple inheritence
class Hybrid: public Animal, public Human{

};
int main(){
    Hybrid Tommy;
    Tommy.bark();
    Tommy.speak();

    return 0;
}