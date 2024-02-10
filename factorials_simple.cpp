#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	system("cls");
	int num, fact = 1,i;
	cout<<"Enter no.: ";
	cin>>num;
	i = 1;
	while (i <= num)
    {
        fact *= i;
        i++;
    }
    cout<<"\nFactorial of "<<num<<" is "<<fact;
}
