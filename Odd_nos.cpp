#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	system("cls");
	int start_no;
	int end_no;

	cout<<"Enter the starting no.: ";
	cin>>start_no;
	cout<<"Enter the ending no.: ";
	cin>>end_no;

	do
    {
        if(start_no%2 == 0)
        {
            ++start_no;
            cout<<start_no<<endl;
            start_no += 2;
        }
        else
        {
            cout<<start_no<<endl;
            start_no += 2;
        }

        if(start_no > end_no)
        {
            break;
        }
    }while(true);
}
