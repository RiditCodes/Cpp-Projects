#include<iostream>
#define square(a) (a*a)
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"\nCube of"<<n<<" is "<<square(n);
}