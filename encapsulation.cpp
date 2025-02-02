#include<iostream>
using namespace std;
class Student{
     private:
     string name;
     int age;
     int height;
     public:
     int printAge(){
        return this->age;
     }
     void setAge(int age){
        this->age = age;
     }
};
int main(){
    Student Ram;
    Ram.setAge(16);
    cout<<"The age of Ram is "<< Ram.printAge()<<endl;
    return 0;
}
