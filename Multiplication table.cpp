#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	system("cls");
	int num, end_num = 0;
	cout<<"Enter no.: ";
	cin>>num;
	cout<<"Enter end point: ";
	cin>>end_num;
	for (int i = 1;i <= end_num;i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
}
