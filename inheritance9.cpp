#include<iostream>
#include<stdio.h>
using namespace std;

class Person{
    private:
        char name[100], gender[20];
        int age;
    public:
        void getData(){
            fflush(stdin);
            cout<<"Enter name: ";
            gets(name);
            cout<<"Enter age: ";
            cin>>age;
            fflush(stdin);
            cout<<"Enter gender: ";
            gets(gender);
        }
        void outputData(){
            cout<<"\nName: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nGender: "<<gender;
        }
};
class Employee1:public Person{
    private:
        char job[100];
    public:
        void putData(){
            cout<<"Enter job name: ";
            gets(job);
        }
        void show(){
            cout<<"\nJob name: "<<job;
        }
};
class Student:public Person{
    private:
        char school[100];
        int grade;
    public:
        void inputData(){
            cout<<"Enter school name: ";
            gets(school);
            cout<<"Enter grade no.: ";
            cin>>grade;
        }
        void display(){
            cout<<"\nSchool name: "<<school;
            cout<<"\nGrade: "<<grade;
        }
};
class Employee2:public Employee1{
    private:
        char department[50];
        int salary;
    public:
        void findData(){
            cout<<"Enter department name: ";
            gets(department);
            cout<<"Enter salary: Rs.";
            cin>>salary;
        }
        void giveData(){
            cout<<"\nDepartment: "<<department;
            cout<<"\nSalary: Rs."<<salary;
        }
};
int main(){
    char choice;
    cout<<"Enter data for employee[E] or student[S]: ";
    cin>>choice;
    Employee2 obj1;
    Student obj2;

    if (choice == 'E'){
        obj1.getData();
        obj1.putData();
        obj1.findData();

        obj1.outputData();
        obj1.show();
        obj1.giveData();

    } else if (choice == 'S'){
        obj2.getData();
        obj2.inputData();

        obj2.outputData();
        obj2.display();

    } else{
        cout<<"Whoops! Incorrect option entered! Please try again";
    }
    
}