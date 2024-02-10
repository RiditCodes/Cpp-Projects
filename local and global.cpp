#include<iostream>
#include<cstdlib>
using namespace std;

int a;
void function_name();
int main()
{
	int b;
	cout<<"Enter value of A: ";
	cin>>a;
	cout<<"Enter value of B: ";
	cin>>b;
	function_name();
	cout<<"Value of B is: "<<b;
}
void function_name()
{
    cout<<"Value of A is: "<<a<<endl;
}
