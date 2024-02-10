#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char c;
    int lowercase, uppercase;
    do
    {
        cout<<"Enter a letter: ";
        cin>>c;
    }while(!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')));

    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(lowercase || uppercase)
    {
        cout<<"This is a vowel";
    }
    else
    {
        cout<<"This is a consonant";
    }
}