#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    system("cls");
    int num, num2;

    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter another number: ";
    cin>>num2;

    try{
        if (typeid(num).name() != typeid(num2).name()){
            throw "Input error";
        } else {
            cout<<num + num2;
        }
    } catch (const char* msg){
        cout<<msg;
    }
}