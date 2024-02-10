#include<iostream>
#include<cstdlib>
using namespace std;

int sum(int n);
int main()
{
	system("cls");
    int num;
    cout<<"Enter no.: ";
    cin>>num;
    cout<<"Sum of "<<num<<" no.s is "<<sum(num);
}
int sum(int n)
{
    if(n>1)
    {
        return n+sum(n-1);
    }
    else
    {
        return 1;
    }
}
