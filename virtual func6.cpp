#include<iostream>
using namespace std;

class weapon{
    public:
        virtual void function(){
            cout<<"\n\nweapon class";
        }
};
class bomb : public weapon{
    public:
        void function(){
            weapon :: function();
            cout<<"\nbomb class";
        }
};
class gun : public weapon{
    public:
        void function(){
            weapon :: function();
            cout<<"\ngun class";
        }
};
class load{
    public:
        void loadfunction(weapon *wp){
            wp->function();
        }
};
int main(){
    weapon *w;
    bomb b;
    gun g;
    load l;
    w = &b;
    l.loadfunction(w);
    w = &g;
    l.loadfunction(w);
}