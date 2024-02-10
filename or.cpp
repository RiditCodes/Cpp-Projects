#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int num;
    system("cls");
    cout<<"Enter no.: ";
    cin>>num;
    cout<<endl;
    if(num <= 10 || num <= 50)
    {
        cout<<num<<" is either less than 10 or 50";        
    }
    else
    {
        cout<<num<<" is not less than 10 or 50";
    }
}