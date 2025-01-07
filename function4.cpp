#include<iostream>
using namespace std;

int add();
int main(){
    int sum = add();

    cout<<"Sum of two numbers is "<<sum;
}
int add(){
    int num1, num2;

    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter another number: ";
    cin>>num2;

    return num1 + num2;
}