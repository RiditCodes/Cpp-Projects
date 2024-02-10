#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c = 0;
    //For while loop
    int d = 1;

    int num;
    cout<<"Enter no. of fibonacci series: ";
    cin>>num;
    while(d <= num)
    {
        cout<<a<<"\n";
        c = a + b;
        a = b;
        b = c;
        d++;
    }
}