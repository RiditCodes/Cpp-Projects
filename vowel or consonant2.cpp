#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char a;
    system("cls");

    while(true)
    {
        cout<<"Enter a letter from the alphabet: ";
        cin>>a;
    
        if(a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9')
        {
            continue;
        }
        else if(!(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'))
        {
            cout<<"'"<<a<<"'"<<" is a consonant.";
            break;
        }
        else
        {
            cout<<"'"<<a<<"'"<<" is a vowel.";
            break;
        }
    }
}