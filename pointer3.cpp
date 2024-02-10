#include<iostream>
using namespace std;

int main()
{
    int arr_num = 5;
    int *ptr;
    int arr[arr_num] = {1, 6, 3, 8, 2};
    ptr = arr;

    for (int i = 0; i < arr_num; i++)
    {
        cout<<"\nValue of element at place "<<i<<" is: "<<arr[i];
        cout<<"\nAddress of element at place "<<i<<" is: "<<&arr[i];
    }
    cout<<endl;
    for (int i = 0; i < arr_num; i++)
    {
        cout<<"\nValue of element at place "<<i<<" is: "<<*(ptr + i);
        cout<<"\nAddress of element at place "<<i<<" is: "<<ptr + i;
    }
}