#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int num;
    int temp;
    int rev_num = 0;

    system("cls");
    cout<<"Enter a no.: ";
    cin>>num;

    temp = num;

    while (temp > 0){
        rev_num = rev_num * 10 + temp % 10;
        temp /= 10;
    }

    if (rev_num == num){
        cout<<num<<" is a palindrome.";
        return 0;
    }
    else{
        cout<<num<<" is not a palindrome";
        return 0;
    }
}