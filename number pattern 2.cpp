#include <iostream>
using namespace std;

int main()
{
	int rows, columns, n;
    cout<<"Enter no. of rows: ";
    cin>>n;

	for (rows = 1; rows <= n; rows++) 
    {
        for (columns = 1; columns <= rows; columns++) 
        {
            cout<<rows<<" ";
		}
		cout<<"\n";
	}
}
