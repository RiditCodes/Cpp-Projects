#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int a,b;
    system("cls");
    cout<<"Enter a no.: ";
    cin>>a;
    b = a--;
    cout<<"\na = "<<--a;
    cout<<"\nb = "<<b;
    b = --a;
    cout<<"\na = "<<a--;
    cout<<"\nb = "<<b;
}
