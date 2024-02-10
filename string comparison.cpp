#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter string: ";
    cin>>str1;
    cout<<"Enter string: ";
    cin>>str2;

    if (str1 == str2)
    {
        cout<<"\nThe strings are the same.";
    }
    else
    {
        cout<<"\nThe strings are not the same.";
    }
}