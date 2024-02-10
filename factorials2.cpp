#include<iostream>
using namespace std;

int Factorial(int n);
int main()
{
    int num, factorial;
    cout<<"Enter a number: ";
    cin>>num;
    factorial = Factorial(num);
    cout<<"Factorial of "<<num<<" is: "<<factorial;
}
int Factorial(int n)
{
    if (n > 1)
    {
        return n*Factorial(n-1);
    }
}