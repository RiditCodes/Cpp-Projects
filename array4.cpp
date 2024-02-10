#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    system("cls");
    int element;
    cout<<"Enter no. of elements: ";
    cin>>element;
    cout<<endl;
    int a[element];
    int i;
    for(i=0;i<element;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<element;i++)
    {
        cout<<"\nAddress of element "<<i+1<<": "<<&a[i];
    }
}