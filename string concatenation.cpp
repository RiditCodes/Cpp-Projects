#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char str1[50],str2[50];
    int i,j;
    
    cout<<"Enter string: ";
    gets(str1);
    cout<<"\nEnter string: ";
    gets(str2);
    i=j=0;
    
    while(str1[i] != NULL)
    i++;
    
    while(str2[j] != NULL)
    str1[i++] = str2[j++];
    str1[i] = NULL;
    cout<<str1;
}