#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[50], str2[50];

    cout<<"Enter string1: ";
    gets(str1);

    strcpy(str2, str1);

    cout<<"String2(copy of string1) is "<<str2;
}