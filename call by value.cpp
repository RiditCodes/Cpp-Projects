#include<iostream>
using namespace std;

void call_by_value(int x, int y);
int main()
{
    int a, b;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    cout<<"\nBefore calling the function..\n";
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    call_by_value(a,b);
    cout<<"\n\nAfter calling the function...";
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
}
void call_by_value(int x, int y)
{
    x = x*2;
    y = y*2;
    cout<<"\n\nWithin call_by_value()...";
    cout<<"\nx = "<<x;
    cout<<"\ny = "<<y;
}