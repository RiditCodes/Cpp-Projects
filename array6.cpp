#include<iostream>
using namespace std;

void function(int array[], int multiple);
int main()
{
    int arr[5];
    int mul;

    for(int i = 0;i < 5;i++)
    {
        cout<<"Enter no. in array: ";
        cin>>arr[i];
    }

    cout<<"\nEnter no. to multiply to all array elements: ";
    cin>>mul;

    function(arr, mul);

}
void function(int arr[], int mul)
{
    int new_arr[5];

    for(int i = 0;i < 5;i++)
    {
        new_arr[i] = arr[i]*mul;
    }
    cout<<"Value of new_arr is: ";
    for(int i = 0;i < 5;i++)
    {
        cout<<endl<<new_arr[i];
    }
}