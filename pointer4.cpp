#include<iostream>
using namespace std;

int main()
{
    int a[2][2];
    int *pa;
    int i,j;
    pa = &a[0][0];
    for (i = 0; i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            cout<<"Enter element for a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    for (i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            cout<<endl<<"Element of a["<<i<<"]["<<j<<"] is: ";
            cout<<*(pa+i*2+j);
            cout<<"\nAddress of a["<<i<<"]["<<j<<"] is: ";
            cout<<pa+i*2+j;
        }
    }
}