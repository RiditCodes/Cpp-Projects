#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

void hello(string name);
int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"\n\nBefore function...";
    cout<<"\nname = "<<name;
    hello(name);
    cout<<"\n\nAfter function...";
    cout<<"\nname = "<<name;
}
void hello(string name)
{
    name = "Hello " + name;
    cout<<"\n\nInside hello() function...";
    cout<<"\nname = "<<name;
}