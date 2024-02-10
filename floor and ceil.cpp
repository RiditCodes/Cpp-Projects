#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double num;

    cout<<"Enter any decimal number: ";
    cin>>num;

    cout<<"The floor of "<<num<<" is: "<<floor(num)<<endl;
    cout<<"The ceil of "<<num<<" is: "<<ceil(num);
}