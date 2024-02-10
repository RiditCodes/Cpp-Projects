#include <iostream>
using namespace std;

int main()
{
    int num_rows;
    int row, column;

    cout<<"Enter no. of rows: ";
    cin>>num_rows;

    for(row = 1; row <= num_rows; row++)
    {
        for(column = row;column <= num_rows;column++)
        {
            cout<<column << " ";
        }
        cout<<endl;
    }
}
