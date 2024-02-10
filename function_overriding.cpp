#include<iostream>
using namespace std;
class ParentClass{
  public:
    void display(){
        cout<<"display() method of parent class";
    }  
};
class ChildClass:public ParentClass{
    public:
        void display(){
            cout<<"display() method of child class";
        }
};
int main(){
    ChildClass object;
    object.display();
}