#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    string str;
    file.open("file.txt");
    getline(file, str);
    while(!file.eof()){
        cout<<str<<endl;
        getline(file, str);
    }
    cout<<str; 
}