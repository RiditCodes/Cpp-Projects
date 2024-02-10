#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int a,b;
	system("cls");
	cout<<"Enter a no.: ";
	cin>>a;
	b=a++ + ++a;
	cout<<"b = "<<b;
	b=++a + a++;
	cout<<endl<<"b = "<<b;
	cout<<endl<<"a = "<<a;
}
