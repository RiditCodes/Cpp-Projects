#include<iostream>
using namespace std;

class Calc{
    public:
        void function();
        void function(int i);
        void function(int i, int f);
        void function(int i, int f, int g);
};

void Calc::function(){
    cout<<"Program of function overloading outside class";
}
void Calc::function(int i){
    cout<<endl<<i<<" x 2 = "<<i*2;
}
void Calc::function(int i, int f){
    cout<<endl<<i<<" - "<<f<<" = "<<i-f;
}
void Calc::function(int i, int f, int g){
    cout<<endl<<i<<" + "<<f<<" + "<<g<<" = "<<i+f+g;
}

int main(){
    int i;
    int f;
    int g;
    Calc obj;

    cout<<"Enter no.: ";
    cin>>i;
    cout<<"Enter another no.: ";
    cin>>f;
    cout<<"Enter another no.: ";
    cin>>g;

    obj.function();
    obj.function(i);
    obj.function(i, f);
    obj.function(i, f, g);
}