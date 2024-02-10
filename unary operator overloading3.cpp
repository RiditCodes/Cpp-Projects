#include<iostream>
using namespace std;

class Incre_Decre{
    int a;
    public:
        Incre_Decre(int b){
            a = b;
        }
        int operator ++(){
            return ++a;
        }
        int operator --(){
            return --a;
        }
};
int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    Incre_Decre ID(n);
    cout<<"\nAfter Increment...";
    cout<<"\na = "<<++ID;
    cout<<"\na = "<<++ID;
    cout<<"\n\nAfter Decrement...";
    cout<<"\na = "<<--ID;
}