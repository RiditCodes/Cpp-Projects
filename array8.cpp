#include<iostream>
using namespace std;

void function(int arr[][2]);
int main()
{
    int arr[2][2], i, j;
    for(i = 0;i <= 2;i++)
    {
        for(j = 0;j <= 2; j++)
        {
            cout<<"Enter element for arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    function(arr);
}
void function(int arr[][2])
{
    cout<<"\nNew elements are: ";
    for(int i = 0;i <= 2;i++)
    {
        for(int j = 0;j <= 2; j++)
        {
            cout<<endl<<arr[i][j];
        }
    }
}