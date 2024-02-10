#include<iostream>
#include<cstdlib>
using namespace std;

void factorials(int a);
int main()
{
	system("cls");
	int num;
	cout<<"Enter no.: ";
	cin>>num;
	if(num >= 0)
    {
        cout<<"Factorial of "<<num<<" is "<<factorials(num);
    }
    else
    {
        num *= -1
        cout<<"Factorial of "<<-1 * num<<" is "<<-1 * factorials(num);
    }
}

void factorials(int a)
{
    if a > 1
    {
        return x * factorials(x-1);
    }
    else
    {
        return 1;
    }
}
