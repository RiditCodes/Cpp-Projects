#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int a,b;
	system("cls");
	cout<<"Enter no.: ";
	cin>>a;
	b=++a;
	cout<<"B = "<<b;
	b=a++;
	cout<<"\nB = "<<b;
	cout<<"\nA = "<<a;
}
