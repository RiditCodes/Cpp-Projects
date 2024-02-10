#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    int i;
    int upper = 0, lower = 0;
    char chr;
    file.open("file2.txt");

    while(!file.eof()){ 
        file.get(chr);
        if(int(chr) >= 97 && int(chr) <= 122){
            lower++;
        }
        else if(int(chr) >= 65 && int(chr) <= 90){
            upper++;
        }
    }
    cout<<"Lowercase letters: " <<lower-1;
    cout<<"\nUppercase letters: "<<upper;
}