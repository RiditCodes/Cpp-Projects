#include<iostream>
#include<stdio.h>
using namespace std;

class Person{
    char name[30], gender[10];
    int age;
    public:
        void getdata(){
            fflush(stdin);
            cout<<"\nName: ";
            gets(name);
            cout<<"\nGender: ";
            cin>>gender;
            cout<<"\nAge: ";
            cin>>age;
        }
        void display(){
            cout<<endl<<"Name: "<<name;
            cout<<endl<<"Gender: "<<gender;
            cout<<endl<<"Age: "<<age;
        }
};
class Student:public Person{
    char institute[30];
    char level[20];
    public:
        void readdata(){
            fflush(stdin);
            cout<<"\nName of the college/school: ";
            gets(institute);
            cout<<"\nLevel: ";
            cin>>level;
        }
        void show(){
            cout<<endl<<"Institute: "<<institute;
            cout<<endl<<"Level: "<<level;
        }
};
class Employee:public Person{
    char company[30];
    int salary;
    public:
        void inputData(){
            fflush(stdin);
            cout<<"\nName of the company: ";
            gets(company);
            cout<<"\nSalary: ";
            cin>>salary;
            cout<<" INR";
        }
        void output(){
            cout<<endl<<"Company: "<<company;
            cout<<endl<<"Salary: Rs."<<salary;
        }
};
int main(){
    Student s;
    Employee e;
    cout<<"Enter details of the student...";
    s.getdata();
    s.readdata();
    cout<<"Enter details of the employee...";
    e.getdata();
    e.inputData();
    cout<<"\n\nDetails of the employee are as follows";
    e.display();
    e.output();
    cout<<"\n\nDetails of the student are as follows";
    s.display();
    s.show();
}