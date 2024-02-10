#include<iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"print() of base class";
        }
        void show(){
            cout<<endl<<endl<<"show() of base class";
        }
};

class Derived : public Base{
    public:
        void print(){
            cout<<"\nprint() of derived class";
        }
        void show(){
            cout<<"show() of derived class";
        }
};
int main(){
    Base base;
    Derived derived;
    base.print();
    base.show();

}