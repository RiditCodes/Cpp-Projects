#include<iostream>
using namespace std;

int main(){
    int num = 5, num2 = 0;

    try {
        if(num2 == 0) {
            throw "Division by zero";
        } else {
            cout<<"Result is: "<<num / num2;
        }
    } catch(const char* msg) {
        cout<<"Error: "<<msg<<endl;
    }
}