#include<iostream>
using namespace std;

int main(){
    int count = 0, i, rem, position = 0, sum, base;
    long int num, temp;
    cout<<"Enter a binary no.: ";
    cin>>num;
    temp = num;
    while(temp > 0){
        base = 1;
        rem = temp % 10;
        temp = temp / 10;
        if(position == 0){
            sum = rem*1;
        }
        else{
            for(i = 0;i<position;i++){
                base = base * 2;
            }
            sum = sum + rem * base;
        }
        position++;
    }
    cout<<num<<" in Binary Number System is equivalent to ";
    cout<<sum<<" in Decimal Number System.";
}