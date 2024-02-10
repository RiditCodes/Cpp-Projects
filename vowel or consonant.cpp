#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char alphabet;
    system("cls");
    cout<<"Enter a letter from the alphabet: ";
    cin>>alphabet;
    
    if(!(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'))
    {
        cout<<"'"<<alphabet<<"'"<<" is a consonant.";
    }
    else
    {
        cout<<"'"<<alphabet<<"'"<<" is a vowel.";
    }
}