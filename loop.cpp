#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int n,i = 10;
	system("cls");
	cout<<"Enter no.(less than 10): ";
	cin>>n;
	do
    {
        cout<<endl<<i;
        i--;
    }while(i>n);
}
