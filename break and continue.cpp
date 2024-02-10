#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    system("cls");
    int num, skip, break_num;
    cout<<"Enter range: ";
    cin>>num;
    cout<<"Enter number to be skipped: ";
    cin>>skip;
    cout<<"Enter number to break loop at: ";
    cin>>break_num;
    for(int i = 1;i < num; i++)
    {
        if(i==skip)
        {
            continue;
        }
        if(i==break_num)
        {
            break;
        }
        cout<<endl<<i;
    }
}