#include<iostream>
using namespace std;

void call_by_reference(int *var1, int *var2);
int main()
{
    int num1, num2;
    cout<<"Enter number: ";
    cin>>num1;
    cout<<"Enter another number: ";
    cin>>num2;

    cout<<"\nBefore calling function: ";
    cout<<"\nnum1 = "<<num1;
    cout<<"\nnum2 = "<<num2;

    call_by_reference(&num1, &num2);

    cout<<"\nAfter calling function: ";
    cout<<"\nnum1 = "<<num1;
    cout<<"\nnum2 = "<<num2;
}
void call_by_reference(int *var1, int *var2)
{
    int var3;
    cout<<"\nEnter no. for var3: ";
    cin>>var3;
    *var1 += var3;
    *var2 += var3;
    cout<<"\nInside call_by_reference function: ";
    cout<<"\n*var1 = "<<*var1;
    cout<<"\n*var2 = "<<*var2;
}