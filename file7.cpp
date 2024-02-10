#include<iostream>
#include<fstream>
using namespace std;

int main(){
    FILE *ptr;
    char str[100];
    ptr = fopen("hello.txt", "w");
    
    cout<<"Enter text: ";
    cin>>str;

    fprintf(ptr, "%s", str);
}