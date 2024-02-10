#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char str1[50],str2[50],str3[50];
    int i,j,k;
    
    cout<<"Enter string: ";
    gets(str1);
    cout<<"\nEnter string: ";
    gets(str3);
    cout<<"\nEnter string: ";
    gets(str2);
    i = j = k = 0;
    
    while(str1[i] != NULL)
    i++;
    
    while(str2[j] != NULL)
    str1[i++] = str2[j++];

    while(str3[k] != NULL)
    str1[i++] = str3[k++];
    str1[i] = NULL;
    
    cout<<endl<<str1;
}