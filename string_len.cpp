#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
    char str[50];
    int len = 0;
    int i;
    system("cls");
    cout<<"Enter the string: ";
    gets(str);
    for(i=0;str[i]!=NULL;i++)
    {
        len += 1;
    }
    cout<<len;
}
