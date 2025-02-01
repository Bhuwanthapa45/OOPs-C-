#include<iostream>
using namespace std;
class Modernfamily{
    private:
    int age;
    public:
    char rank;
    //Paramateized Constructor
    Modernfamily(int age, char rank){
        cout << this << endl;
        this -> age = age;
        this -> rank = rank;
    };
    void print(){
        cout<< this ->age << endl;
        cout<< this ->rank <<endl;

    }
    //Making our Own Copy Constructor
    Modernfamily(Modernfamily& temp){
        cout<<"Copy Constructor Called"<< endl;
        this->age = temp.age;
        this->rank =temp.rank;
    }

};
int main(){
    Modernfamily Luke(21, 'B');
    Luke.print();

    Modernfamily Alex(24, 'A');
    Alex.print();
    
    //Copy Constructor : Constructor that copies the objects
    Modernfamily Manny(Luke);
    //This is default Copy constructor made by the compiler or the system itself
    Manny.print();
    //Using Copy assignment Operator 
    Modernfamily Lily = Modernfamily Alex;
    cout<<"Printing after using copy constructor "<<Lily.print()<<endl;

    cout<< "The address of the object Luke is " << &Luke << endl;
    return 0;
}
