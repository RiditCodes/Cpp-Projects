#include<iostream>
#define N 0
using namespace std;

int main()
{
    #if N < 0
    cout<<"N is negative";
    #elif N == 0
    cout<<"N is zero";
    #else
    cout<<"N is positive";
    #endif
}