#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    string str;
    file.open("C:/Users/Ridit/OneDrive/Documents/Cpp-Projects/file.txt");
    getline(file, str);
    while(!file.eof()){
        cout<<str<<endl;
        getline(file, str);
    }
    cout<<str; 
}