#include<iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"print() of base class";
        }
        void show(){
            cout<<endl<<endl<<"\nshow() of base class";
        }
};

class Derived : public Base{
    public:
        void print(){
            cout<<"\nprint() of derived class";
        }
        void show(){
            cout<<"\nshow() of derived class";
        }
};
int main(){
    Base *base;
    Derived derived;
    derived.print();
    derived.show();

}