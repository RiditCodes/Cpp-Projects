#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    string str;
    file.open("file.txt");
    while(!file.eof()){
        str = file.get();
        cout<<str;
    }
}