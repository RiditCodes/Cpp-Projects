#include<iostream>
#include<cstdlib>
using namespace std;

static int var;
void static_();
int main()
{

	system("cls");
	int var2;
	cout<<"Enter static variable value: ";
	cin>>var;
	cout<<"Enter variable value: ";
	cin>>var2;
	static_();
	cout<<"Value of variable 2: "<<var2;
}
void static_()
{
    cout<<"Value of static variable: "<<var<<endl;
}
