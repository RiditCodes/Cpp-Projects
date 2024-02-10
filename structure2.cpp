#include<iostream>
#include<stdio.h>
using namespace std;

struct student
{
    char name[50];
    int id;
};
int main()
{
    struct student student1,student2;
    cout<<"Enter the name of student 1: ";
    gets(student1.name);
    cout<<"Enter ID of student 1: ";
    cin>>student1.id;

    fflush(stdin);
    cout<<"Enter the name of student 2: ";
    gets(student2.name);
    cout<<"Enter ID of student 2: ";
    cin>>student2.id;

    cout<<"\nName of student 1 is: ";
    puts(student1.name);
    cout<<"ID of student 1 is: "<<student1.id;

    cout<<"\n\nName of student 2 is: ";
    puts(student2.name);
    cout<<"ID of student 2 is: "<<student2.id;
}