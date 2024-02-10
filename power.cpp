#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double base, power;
    
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>power;

    double result = pow(base, power);

    cout<<"Result is: ";
    cout<<result;
}