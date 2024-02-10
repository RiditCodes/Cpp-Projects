#include<iostream>
using namespace std;

class Pre_Incre_Decre{
    int a, b;
    public:
        Pre_Incre_Decre(int x, int y){
            a = x;
            b = y;
        }
        Pre_Incre_Decre operator ++(){
            ++a;
            ++b;
        }
        Pre_Incre_Decre operator --(){
            --a;
            --b;
        }
        void display(){
            cout<<"\na = "<<a;
            cout<<"\nb = "<<b;
        }
};
int main(){
    int m, n;
    cout<<"Enter no.: ";
    cin>>m;
    cout<<"Enter another no.: ";
    cin>>n;
    Pre_Incre_Decre obj(m, n);
    cout<<"\nBefore Change...";
    obj.display();
    cout<<"\nAfter Pre-Increment...";
    ++obj;
    ++obj;
    obj.display();
    cout<<"\nAfter Pre-Decrement...";
    --obj;
    obj.display();
}