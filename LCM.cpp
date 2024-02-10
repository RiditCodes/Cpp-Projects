#include<iostream>
using namespace std;

int main(){
    int num1, num2, divisor, temp, number1, number2;
    temp = 1;

    cout<<"Enter a no.: ";
    cin>>number1;
    cout<<"Enter another no.: ";
    cin>>number2;
    
    while(temp <= number1){
        int remainder1 = number1 % temp;
        int remainder2 = number2 % temp;

        if(remainder1 == 0 && remainder2 == 0){
            divisor = temp;
            num1 = number1/temp;
            num2 = number2/temp;
        }
        temp++;
    }
    cout<<"LCM of "<<number1<<" and "<<number2<<" is: ";
    cout<<divisor*num1*num2;
}