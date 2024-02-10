#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    file.open("file.txt");
    int count = 0;
    char character;
    while(!file.eof()){
        character = file.get();
        cout<<character<<endl;
        count++;
    }
    cout<<count<<" characters\n";
}