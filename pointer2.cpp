#include<iostream>
using namespace std;

int main()
{
    int arr_number = 5;
    int array[arr_number] = {4, 7, 5, 2, 9};
    int *ptr;
    ptr = array;
    
    for (int i = 0;i < arr_number; i++)
    {
        cout<<"\nValue of element "<<i<<" is: "<<array[i];
        cout<<"\nAddress of element "<<i<<" is: "<<&array[i];
    }
    cout<<endl;
    for (int i = 0;i < arr_number; i++)
    {
        cout<<"\nValue of element "<<i<<" is: "<<*(ptr + i);
        cout<<"\nAddress of element "<<i<<" is: "<<ptr + i;
    }
}