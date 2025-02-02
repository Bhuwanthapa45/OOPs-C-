#include<iostream>
using namespace std;
//Parent Class
class Human{
  public:
  int height;
  int weight;
  int age;
  public:
  int getAge(){
    return this->age;
  }
  void setWeight(int w){
    this->weight = w;
  }
};
//Children Class
class Male: public Human{
    public:
    string color;

};
int main(){
    return 0;
}