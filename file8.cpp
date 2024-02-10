#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file;
    char str[100];
    file.open("hello.txt", ios::app);

    cout<<"Enter a string: ";
    gets(str);

    file<<"\n"<<str;
}