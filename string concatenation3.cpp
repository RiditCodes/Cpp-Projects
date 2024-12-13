#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[50], str2[50];
    char space[2] = " ";
    cout<<"Enter a string: ";
    gets(str1);
    cout<<"Enter another string: ";
    gets(str2);

    cout<<strcat(str1, strcat(space, str2))<<endl;
    cout<<str1<<endl;
    cout<<str2;
}