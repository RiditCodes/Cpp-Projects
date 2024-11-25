#include<iostream>
#include<cstdlib>
using namespace std;

int add();
int main()
{
	system("cls");
	int sum = add();

	cout<<"The sum is "<<sum;
}
int add()
{
	int a;
	int b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	return a+b;
}