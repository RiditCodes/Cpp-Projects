#include<iostream>
#include<stdio.h>
using namespace std;

class Employee1{
    char name[40], gender[40];
    int age;
    public:
        void getData(){
            cout<<endl<<"Enter name: ";
            gets(name);
            cout<<"Enter gender: ";
            cin>>gender;
            cout<<"Enter age: ";
            cin>>age;
        }
        void display(){
            cout<<endl<<"Name: "<<name;
            cout<<endl<<"Gender: "<<gender;
            cout<<endl<<"Age: "<<age;
        }
};
class Employee2:public Employee1{
    char name[40];
    int salary;
    public:
        void readdata(){
            cout<<"Enter name of the company: ";
            fflush(stdin);
            gets(name);
            cout<<"Enter salary: ";
            cin>>salary;
        }
        void show(){
            cout<<endl<<"Name of the company: "<<name;
            cout<<endl<<"Salary: "<<salary;
        }
};
class Employee3:public Employee2{
    int number;
    public:
        void inputdata(){
            cout<<"Enter number of languages known: ";
            cin>>number;
        }
        void output(){
            cout<<endl<<"Number of languages known: ";
            cout<<number;
        }
};
int main(){
    Employee3 e3;
    cout<<"Enter the details of the employee: ";
    e3.getData();
    e3.readdata();
    e3.inputdata();
    cout<<endl<<endl<<"Details of the employee are given below: ";
    e3.display();
    e3.show();
    e3.output();

}