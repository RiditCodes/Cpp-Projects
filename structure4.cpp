#include<iostream>
#include<stdio.h>
using namespace std;

struct person
{
    char name[50];
    int salary;
};
int main()
{
    struct person person1, person2;
    cout<<"Enter name of first person: ";
    gets(person1.name);
    cout<<"Enter salary: ";
    cin>>person1.salary;

    fflush(stdin);
    cout<<"Enter name of second person: ";
    gets(person2.name);
    cout<<"Enter salary: ";
    cin>>person2.salary;

    cout<<"\nName of first person is: "<<person1.name;
    cout<<"\nSalary: "<<person1.salary;

    cout<<"\n\nName of second person is: "<<person2.name;
    cout<<"\nSalary: "<<person2.salary;
}