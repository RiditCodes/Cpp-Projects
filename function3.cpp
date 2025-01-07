#include<iostream>
using namespace std;

void function(int num);
int main(){
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    function(number);
}
void function(int num){
    if (num % 2 == 0){
        cout<<"Number is even";
    } else{
        cout<<"Number is odd";
    }
}