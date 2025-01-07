#include<iostream>
#include<stdio.h>
using namespace std;

class Person{
    private:
        char name[50];
        int id;
    public:
        void accept_person_details(){
            cout<<"Enter name: ";
            gets(name);
            cout<<"Enter id: ";
            cin>>id;
        }
        void display_person_details(){
            cout<<"Name: "<<name;
            cout<<"\nID: "<<id;
        }
};
class Teaching:public Person{
    private:
        char subject[20];
        char teacher[50];
    public:
        void accept_teacher_details(){
            accept_person_details();
            fflush(stdin);
            cout<<"Enter subject name: ";
            gets(subject);
            cout<<"Enter teacher name: ";
            gets(teacher);
        }
        void display_teacher_details(){
            display_person_details();
            cout<<"\nSubject: "<<subject;
            cout<<"\nTeacher: "<<teacher;
        }
};
class NonTeaching{
    private:
        char department[50];
    public:
        void accept_nonteaching_details(){
            cout<<"Enter department name: ";
            gets(department);
        }
        void display_nonteaching_details(){
            cout<<"\nDepartment: "<<department;
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
    cout<<"Enter instructor details...\n";
    obj.accept_instructor_details();
    cout<<"\nInstructor details...\n";
    obj.display_instructor_details();
}