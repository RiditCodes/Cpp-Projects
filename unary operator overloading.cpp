#include<iostream>
using namespace std;

class Incre_Decre{
    int a;
    public:
        Incre_Decre(int b){
            a = b;
        }
        void operator++(){
            a++;
        }
        void operator--(){
            a--;
        }
        void display(){
            cout<<endl<<"a = "<<a;
        }
};
int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    Incre_Decre obj(n);
    cout<<"\nAfter Increment...";
    obj++;
    obj++;
    obj.display();
    cout<<"\n\nAfter Decrement...";
    obj--;
    obj.display();
}