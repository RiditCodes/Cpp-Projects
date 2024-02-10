#include<iostream>
#define N 10
#undef N
using namespace std;

int main()
{
    #ifndef N
    cout<<12;
    #else
    cout<<N;
    #endif
}