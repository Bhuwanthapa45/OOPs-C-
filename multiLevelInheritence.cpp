#include<iostream>
using namespace std;
class Animal {
    public:
    int age;
    int height;
    int weight;
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};
class Dog: public Animal{

};
class Labradore: public Dog{

};
int main(){
    Dog a;
    a.speak();
    Labradore kafka;
    kafka.speak();
    return 0;
}