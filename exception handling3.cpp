#include<iostream>
using namespace std;

int main(){
    int num, num2;

    cout<<"Enter a number: ";
    cin>>num;

    try{
        if (typeid(num).name() != typeid(num2).name()){
            throw "Input error";
        }
    } catch (const char* msg){
        cout<<msg;
    }

    cout<<num;
}