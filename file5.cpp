#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    file.open("file.txt");
    int count, spaceCount = 0, lineCount = 0;
    char character;
    while(!file.eof()){
        character = file.get();
        if(character == ' '){
            spaceCount++;
        }
        if(character == '\n'){
            lineCount++;
        }
        count++;
    }
    cout<<count - 1<<" character(s)\n";
    cout<<spaceCount<<" space(s)\n";
    cout<<lineCount + 1<<" line(s)\n";
}