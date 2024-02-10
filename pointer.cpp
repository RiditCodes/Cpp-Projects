#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int a;
    int *ptr;
    system("cls");
    ptr = &a;
    cout<<"Enter no.: ";
    cin>>a;
    cout<<"\nValue of a: "<<a;
    cout<<"\nAddress of a: "<<&a;
    
    cout<<"\n\nValue of a: "<<*ptr;
    cout<<"\nAddress of a: "<<ptr;
}