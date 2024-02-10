#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	system("cls");
	int num, i;
	cout<<"Enter no.: ";
	cin>>num;
	if(num == 1)
    {
        cout<<num<<" is neither prime nor composite!";
    }
    else if(num == 2)
    {
        cout<<num<<" is prime";
    }
    else
    {
        for (i = 2;i<num;i++)
        {
            if(num%i == 0)
            {
                cout<<num<<" is not prime";
                break;
            }
            else if(i == num - 1)
            {
                cout<<num<<" is prime";
            }

        }
    }
}
