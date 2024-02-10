#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num_string, i;
    cout<<"Enter no. of strings: ";
    cin>>num_string;
    cout<<endl;
    
    char str[num_string][50];
    for(i=0;i<num_string;i++)
    {
        fflush(stdin);
        cout<<"Enter string: ";
        gets(str[i]);
    }
    for(i=0;i<num_string;i++)
    {
        cout<<endl;
        puts(str[i]);
    }
}