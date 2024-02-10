#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        void function(){
            cout<<"Program of function overloading";
        }
        void function(string i){
            cout<<endl<<"Name is "<<i;
        }
        void function(int f){
            cout<<endl<<"Age is "<<f;
        }
        void function(string i, int f){
            cout<<endl<<"Name and age is: "<<i<<" and "<<f<<" years old";
        }
        void function(int time, string class_name){
            cout<<endl<<"Class and time: "<<class_name<<" and "<<time<<" years";
        }
};
int main()
{
    Student obj;
    obj.function();
    obj.function("Ridit Agarwal");
    obj.function(11);
    obj.function("Advit Agarwal", 5);
    obj.function(3, "Coding class");
}