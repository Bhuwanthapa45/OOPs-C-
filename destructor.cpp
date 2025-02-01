#include<iostream>
using namespace std;
class Avengers{
    public:
    Avengers(){
        cout<<"Constructor is called"<<endl;
    }
    //Distrucotr When an object is created statically than the destructor is invoked automatically
    //But when the object is created by dynamic allocation destruction have to be created manually.

    ~Avengers(){
        cout<<"Distructor is called "<<endl;
    }

};
int main(){
    Avengers Spiderman;
    //Dynamically Allocating the Object
    Avengers *Ironman = new Avengers();
    //Since the object is created dynamically the distructor has to be created manually.
    delete Ironman;

    return 0;
}