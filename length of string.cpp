#include<iostream>
using namespace std;

int main(){
    int i, count = 0;
    string str = "Ridit";
    for (i = 0; str[i]; i++){
        count++;
    }

    cout<<"The length of the string is "<<count<<endl;
    return 0;
}
