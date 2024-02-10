#include<iostream>
#include<cstdlib>
using namespace std;

void user_defined();
int a;
int main()
{
	int b;
	cout<<"Enter number for A: ";
	cin>>a;
	cout<<"Enter number for B: ";
	cin>>b;
	user_defined();
	cout<<"\nValue of B is "<<b;
}
void user_defined()
{
    cout<<"Value of A is "<<a;
}
