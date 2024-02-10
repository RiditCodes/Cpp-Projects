#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;

int main()
{
    char str[50];
    int i;
    system("cls");
    cout<<"Enter a string(50 character limit): ";
    gets(str);
    for(i=0;str[i]!=NULL;i++)
    {
        cout<<endl<<str[i];
    }
}
