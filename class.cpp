#include<iostream>
using namespace std;

class Test
{
    int num1;
    float num2;
    public:
    void setData()
    {
        num1 = 12;
        num2 = 34.56;
    }
    void displayData()
    {
        cout<<"num1 = "<<num1<<endl;
        cout<<"num2 = "<<num2;
    }
};
int main()
{
    Test object;
    object.setData();
    object.displayData();
}