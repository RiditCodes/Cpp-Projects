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
    if(num >= 10 && num <= 20)
    {
        cout<<num<<" is between 10 and 20";        
    }
    else
    {
        cout<<num<<" is not between 10 and 20";
    }
}