#include<iostream>
using namespace std;

void function(int array[], int element);
int main()
{
    int arr[5];
    int element;

    for(int i = 0;i < 5;i++)
    {
        cout<<"Enter a no.: ";
        cin>>arr[i];
    }
    cout<<"\nBefore calling function...\nNumbers are: ";
    for(int i = 0;i < 5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n\nEnter element no. to send to function: ";
    cin>>element;

    function(arr, element);

    cout<<"\n\nAfter calling function...\nNumbers are: ";
    for(int i = 0;i < 5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void function(int array[], int element)
{
    int add = array[element] + 5;
    cout<<"\nInside function()...\n";
    cout<<"Original value: "<<array[element]<<" and new value: "<<add<<endl;
    for(int i = 0;i < 5;i++)
    {
        cout<<array[i]<<" ";
    }
}