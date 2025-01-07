#include <iostream>
using namespace std;

int odd(int range);
int main(){
    int num, sum;

    cout<<"Enter range of numbers from 0 to: ";
    cin>>num;

    sum = odd(num);

    cout<<"Sum of all the odd numbers between the range is: "<<sum;
}

int odd(int range){
    int sum = 0;
    
    for (int i = 0; i <= range; i++) {
        if (i % 2 != 0){ 
            sum += i;
        }
    }

    return sum;
}