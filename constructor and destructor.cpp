#include<iostream>
using namespace std;

class Cons_Des{
    int a;
    public:
        Cons_Des(){
            cout<<"Default constructor";
        }
        Cons_Des(int b){
            cout<<"\n\nParameterized constructor";
            a = b;
        }
        Cons_Des(const Cons_Des &CD){
            cout<<"\n\nCopy Constructor";
            a = CD.a;
        }
        void show()
        {
            cout<<"\n\na = "<<a;
        }
        ~Cons_Des(){
            cout<<"\n\nDestructor";
        }
};
int main(){
    Cons_Des CD1;
    Cons_Des CD2(6);
    Cons_Des CD3 = CD2;
    CD3.show();
}