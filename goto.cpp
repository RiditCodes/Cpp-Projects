#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if (num % 2 == 0){
        goto even;
    }
    
    cout<<num<<" is odd"<<endl;
    ++num;
    cout<<"1 added to make it even"<<endl;

    even:
    cout<<num<<" is even";
}