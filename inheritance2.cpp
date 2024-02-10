#include<iostream>
using namespace std;

class Base
{
    public:
        int num1, num2;
        void getData()
        {
            cout<<"Enter a no.: ";
            cin>>num1;
            cout<<"Enter another no.: ";
            cin>>num2;
        }
};
class Derived:public Base
{
    public:
        int Add()
        {
            return num1 + num2;
        }
        int Subtract()
        {
            return num1 - num2;
        }
        int Multiply()
        {
            return num1*num2;
        }
        int Divide()
        {
            return num1 / num2;
        }
};
int main()
{
    Derived obj;
    obj.getData();
    cout<<obj.num1<<" + "<<obj.num2<<" = "<<obj.Add()<<endl;
    cout<<obj.num1<<" - "<<obj.num2<<" = "<<obj.Subtract()<<endl;
    cout<<obj.num1<<" * "<<obj.num2<<" = "<<obj.Multiply()<<endl;
    cout<<obj.num1<<" / "<<obj.num2<<" = "<<obj.Divide()<<endl;
}