#include<iostream>
#include<cstdlib>
using namespace std;

void function();
int main()
{
    system("cls");
    function();
}
void function()
{
    int a;
    cout<<"Inside function\n";
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Your number is: "<<a;
}
