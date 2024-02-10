#include<iostream>
#include<cstdlib>
using namespace std;

int prime();
int main()
{
	system("cls");
	int state;
	state = prime();
	if(state == 1)
    {
        cout<<"Your number is neither prime nor composite";
    }
    else if(state == 2)
    {
        cout<<"Your number is prime";
    }
    else if(state == 3)
    {
        cout<<"Your number is not prime";
    }
}

int prime()
{
    int num;
    cout<<"Enter no.: ";
	cin>>num;
    int i;
    if(num == 1)
    {
        return 1;
    }
    else if(num == 2)
    {
        return 2;
    }
    else
    {
        for (i = 2;i<num;i++)
        {
            if(num%i == 0)
            {
                return 3;
                break;
            }
            else if(i == num - 1)
            {
                return 2;
            }

        }
    }
}
