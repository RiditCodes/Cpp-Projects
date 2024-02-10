#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int a, b, num;
    system("cls");
    cout<<"Enter the starting value: ";
    cin>>a;
    cout<<"Enter the ending value: ";
    cin>>b;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(num <= a || num >= b)
    {
        cout<<num<<" is not between "<<a<<" and "<<b;
    }
    else
    {
        cout<<num<<" is between "<<a<<" and "<<b;
    }
}