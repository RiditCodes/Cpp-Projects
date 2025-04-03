#include<iostream>
using namespace std;

int Factorial(int n);
int main()
{
    int num, factorial;
    cout<<"Enter a number: ";
    cin>>num;
    factorial = Factorial(num);
    if (factorial != 1){
        cout<<"Factorial of "<<num<<" is: "<<factorial;
    } else{
        return 0;
    }
}
int Factorial(int n){
    if (n > 1)
    {
        return n*Factorial(n-1);
    }
    else
    {
        return 1;
    }
}