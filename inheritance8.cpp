#include<iostream>
#include<stdio.h>
using namespace std;

class Person{
    private:
        char name[50], gender[10];
        int age;
    public:
        void inputData(){
            fflush(stdin);
            cout<<"\nEnter person's name: ";
            gets(name);
            cout<<"\nEnter person's age: ";
            cin>>age;
            fflush(stdin);
            cout<<"\nEnter person's gender: ";
            gets(gender);
        }
        void outputData(){
            cout<<"\nPerson's name is: "<<name;
            cout<<"\nPerson's age is: "<<age;
            cout<<"\nPerson's gender is: "<<gender;
        }
};
class EmployeeData1:public Person{
    private:
        char job[100];
    public:
        void putData(){
            cout<<"\nEnter person's job name: ";
            gets(job);
        }
        void show(){
            cout<<"\nPerson's job name is: "<<job;
        }
};
class EmployeeData2:public EmployeeData1{
    private:
        char department[100];
        int salary;
    public:
        void getData(){
            cout<<"\nEnter person's department: ";
            gets(department);
            cout<<"\nEnter person's salary: ";
            cin>>salary;
        }
        void display(){
            cout<<"\nPerson's department is: "<<department;
            cout<<"\nPerson's salary is: Rs."<<salary;
        }
};
int main(){
    int employee_no;
    cout<<"Enter no. of employees: ";
    cin>>employee_no;
    EmployeeData2 obj[employee_no];

    for (int i = 0; i <= employee_no; i++){
        cout<<"\nEnter data for employee "<<i+1;
        obj[i].inputData();
        obj[i].putData();
        obj[i].getData();
    }
    for (int i = 0; i <= employee_no; i++){
        cout<<"\nData of employee "<<i+1;
        obj[i].outputData();
        obj[i].show();
        obj[i].display();
    }
}