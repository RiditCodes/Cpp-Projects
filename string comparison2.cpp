#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[50], str2[50];

    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Enter another string: ";
    cin>>str2;

    if (strcmp(str, str2) == 0){
        cout<<"The strings are the same.";
    } else{
        cout<<"The strings are not the same.";
    }
}