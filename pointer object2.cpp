#include<iostream>
#include<stdio.h>
using namespace std;

class School{
    char name[100];
    char address[100];
    static int i;
    public:
        School(){
            cout<<"Enter name of school "<<i<<": ";
            gets(name);
            cout<<"Enter address of school "<<i++<<": ";
            gets(address);
            if (i > 2){
                i = 1;
            }
        }
        void display(){
            cout<<"\nName of school "<<i<<" is "<<name;
            cout<<"\nAddress of school "<<i++<<" is "<<address;
        }
};

int School :: i = 1;

int main(){
    School school1, school2;
    School *ptr;
    cout<<"\n\nDisplay function using pointer";
    ptr = &school1;
    ptr->display();
    ptr = &school2;
    ptr->display();
}