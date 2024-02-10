#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	system("cls");
	int array_size;
	cout<<"Enter array size: ";
	cin>>array_size;
	cout<<endl;
	int arr[array_size];
	int i;
	for(i=0;i<array_size;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<endl;
    for(i=0;i<array_size;i++)
    {
        cout<<"\nElement "<<i+1<<": "<<arr[i];
    }
}
