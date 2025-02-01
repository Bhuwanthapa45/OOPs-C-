#include<iostream>
using namespace std;
class Hero {
    private:
    int health;
    public:
    char Level;
    //Getter
    int getHealth(){
        return health;
    }
    //Setter
    void setHealth(int h){
        health = h;
    }


};
int main(){
    //Static Allocation
    Hero IronMan;
    IronMan.setHealth(500);
    cout<<"Health of Iron Man is "<< IronMan.getHealth()<<endl;

    //dynamic allocatoion
    Hero *b = new Hero;
    cout<<"Health of b is "<< (*b).getHealth()<<endl;
    
    return 0;
}