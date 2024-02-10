#include<iostream>
using namespace std;

struct person
{
    char name[50];
    int salary;
};
int main()
{
    struct person person1, person2;
    cout<<"Enter name: ";
    gets(person1.name);
    cout<<"Enter salary: ";
    cin>>person1.salary;

    cout<<"\nEnter name: ";
    gets(person2.name);
    cout<<"Enter salary: ";
    cin>>person2.salary;

    cout<<"\nName of person1: "<<person1.name;
    cout<<"Salary of person1: "<<person1.salary;
    
    cout<<"\nName of person2: "<<person2.name;
    cout<<"Salary of person2: "<<person2.salary;
}