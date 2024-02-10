#include<iostream>
using namespace std;

int main()
{
    int a[10], i;

    for(i = 0;i <= 10;i++)
    {
        cout<<"Enter element at a["<<i<<"]: ";
        cin>>a[i];
    }
    for(i = 0;i <= 10;i++)
    {
        cout<<"\nElement of a["<<i<<"]: ";
        cout<<a[i];
        cout<<"\nAddress of a["<<i<<"]: "<<&a[i];
    }
    cout<<"\nAddress of 1st element: "<<a;
}