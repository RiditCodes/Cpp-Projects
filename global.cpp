#include<iostream>
#include<cstdlib>
using namespace std;

int a;
void global();
int main()
{
    system("cls");
    cout<<"Enter number: ";
    cin>>a;
    global();
}
void global()
{
    cout<<"a = "<<a;
}
