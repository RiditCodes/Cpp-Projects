#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int num;
    system("cls");
    cout<<"Enter the number: ";
    cin>>num;

    if(!(num>10))
    {
        cout<<num<<" is not greater than 10.";
    }
    else
    {
        cout<<num<<" is greater than 10.";
    }
}