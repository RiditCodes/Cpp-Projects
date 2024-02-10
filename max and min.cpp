#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout<<"Enter a no.: ";
    cin>>num1;
    cout<<"Enter another no.: ";
    cin>>num2;

    int largest = max(num1, num2);
    int smallest = min(num1, num2);

    cout<<"The largest no. is: "<<largest<<endl;
    cout<<"The smallest no. is: "<<smallest;
}