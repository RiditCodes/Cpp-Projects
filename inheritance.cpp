#include<iostream>
#include<stdio.h>
using namespace std;

class Base
{
    public:
        int x;
        void getData()
        {
            cout<<"Enter no.: ";
            cin>>x;
        }
};
class Derived:public Base
{
    private:
        int y;
    public:
        void readData()
        {
            cout<<"Enter another no.: ";
            cin>>y;
        }
        void product()
        {
            cout<<endl<<x<<"*"<<y<<"="<<x*y;
        }
};
int main()
{
    Derived object;
    object.getData();
    object.readData();
    object.product();
}