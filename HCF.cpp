#include<iostream>
using namespace std;

int main(){
    int num1, num2, remainder = 1, divisor, dividend;
    cout<<"Enter a no.: ";
    cin>>num1;
    cout<<"Enter another no.: ";
    cin>>num2;

    if(num1>num2){
        dividend = num1;
        divisor = num2;
    }
    else{
        dividend = num2;
        divisor = num1;
    }
    while(remainder>0){    
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }

    cout<<"H.C.F: "<<dividend;
}