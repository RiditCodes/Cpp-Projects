#include<iostream>
using namespace std;

int main()
{
    int i, j, num_rows;
    cout<<"Enter no. of rows: ";
    cin>>num_rows;
    for(i = 1; i <= num_rows; i++)
    {
        for(j = 1;j <= num_rows; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}