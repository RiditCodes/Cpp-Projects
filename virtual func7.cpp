#include<iostream>
using namespace std;

class Base{
    public:
        int a, b, result;
        virtual void operation(){
            cout<<"Enter a number: ";
            cin>>a;
            cout<<"Enter another number: ";
            cin>>b;
            cout<<"Addition";
            result = a + b;
        }
        virtual void show(){
            cout<<"\nThe result of addition is: "<<result;
        }
};
class Derived : public Base{
    public:
        void operation(){
            cout<<"Enter a number: ";
            cin>>a;
            cout<<"Enter another number: ";
            cin>>b;
            cout<<"Subtraction";
            result = a - b;
        }
        void show(){
            cout<<"\nThe result of subtraction is: "<<result;
        }
};
int main(){
    Base *base;
    Derived dev;
    base = &dev;
    base -> operation();
    base -> show();
}