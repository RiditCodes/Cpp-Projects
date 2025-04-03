#include<iostream>
#include<cstdlib>
using namespace std;

void static_local();
int main()
{
	int n,i = 1;
	system("cls");
	cout<<"Enter number: ";
	cin>>n;
	do
    {
        static_local();
        i++;
    }while(i<=n);
}
void static_local()
{
    static int a = 1;
    int b = 1;
    cout<<endl<<a;
    cout<<"\t"<<b;
    a += 2;
    b += 1;
}
