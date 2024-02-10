#include<iostream>
using namespace std;

int main(){
    char str[50];
    int i, len = 0;
    cout<<"Enter a string: ";
    gets(str);

    cout<<len<<endl;
    while(str[len]){
        len++;
    }
    cout<<len<<endl;

    for(i = len - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }
}