#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file;
    char str[100];
    file.open("file.txt");

    cout<<"Enter a string: ";
    gets(str);
    
    file<<str;
    file.close();
}