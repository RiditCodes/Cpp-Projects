#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char string1[50];

    cout<<"Enter a string: ";
    gets(string1);

    cout<<"The length of the string is: "<<strlen(string1);
}