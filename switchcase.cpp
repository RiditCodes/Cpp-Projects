#include<iostream>
using namespace std;

void odd_even();
void fibonacci();
void prime();
int main(){
    int i, choice;
    do{
        cout<<"\nEnter choice: 1-Odd or Even, 2-Fibonacci, 3-Prime, 4-Exit: ";
        cin>>i;
        switch(i){
            case 1:
                odd_even();
                break;
            case 2:
                fibonacci();
                break;
            case 3:
                prime();
                break;
            default:
                cout<<"Wrong choice! Try again.";
                break;
        }
    }while(i != 4);
}
void odd_even(){
    int num;
    cout<<"Enter no: ";
    cin>>num;
    if(num % 2 != 0){
        cout<<"Number is odd";
    }
    else{
        cout<<"Number is even";
    }
}
void fibonacci(){
    int n = 0, t1 = 0, t2 = 1, next = 0;
    cout<<"Enter no. of terms: ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        if (i == 1){
            cout<<t1<<" ";
            continue;
        }
        if (i == 2){
            cout<<t2<<" ";
            continue;
        }
    
        next = t1 + t2;
        t1 = t2;
        t2 = next;

        cout<<next<<" ";
    }
}
void prime(){
    int num;
    bool is_prime = true;

    cout<<"Enter no.: ";
    cin>>num;

    if (num == 0 || num == 1){
        is_prime = false;
    }

    for (int i = 2; i <= num/2; i++){
        if (num % i == 0){
            is_prime = false;
        }
    }

    if (is_prime == false){
        cout<<"Number is not prime";
    }
    else{
        cout<<"Number is prime";
    }
}