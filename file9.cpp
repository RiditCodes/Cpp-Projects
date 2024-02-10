#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    ofstream file2;
    string str;
    file.open("file.txt");
    file2.open("hello.txt", ios::app);
    
    while(!file.eof()){
        str = file.get();
        file2<<str;
    }
}