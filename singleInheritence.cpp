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
int main(){
    Dog a;
    a.speak();
    return 0;
}