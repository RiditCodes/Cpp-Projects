#include<iostream>
#include<stdio.h>
using namespace std;

class Person{
    int id;
    char name[25];
    public:
        void accept_person_details(){
            cout<<"Enter id: ";
            cin>>id;
            fflush(stdin);
            cout<<"Enter name: ";
            gets(name);
        }
        void display_person_details(){
            cout<<endl<<"ID: "<<id;
            cout<<endl<<"Name: "<<name;
        }
};
class Teaching:public Person{
    char subject_name[20];
    char teacher_name[30];
    public:
        void accept_teacher_details(){
            accept_person_details();
            cout<<"Enter name of the subject: ";
            gets(subject_name);
            cout<<"Enter name of the teacher: ";
            gets(teacher_name);
        }
        void display_teacher_details(){
            display_person_details();
            cout<<endl<<"Subject: "<<subject_name;
            cout<<endl<<"Teacher: "<<teacher_name;
        }
};
class NonTeaching{
    char dept_name[20];
    public:
        void accept_nonteaching_details(){
            cout<<"Enter name of the department: ";
            gets(dept_name);
        }
        void display_nonteaching_details(){
            cout<<endl<<"Department: "<<dept_name;
        }
};
class Instructor:public Teaching, public NonTeaching{
    public:
        void accept_instructor_details(){
            accept_teacher_details();
            accept_nonteaching_details();
        }
        void display_instructor_details(){
            display_teacher_details();
            display_nonteaching_details();
        }
};
int main(){
    Instructor obj;
    cout<<"Enter Student Details\n";
    obj.accept_instructor_details();
    cout<<"\nStudent details are as follows";
    obj.display_instructor_details();
}