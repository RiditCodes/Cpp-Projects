#include<iostream>
#include<stdio.h>
using namespace std;

class Student1{
    private:
        int age;
        char name[50], gender[50];
    public:
        void getData(){
            cout<<"Enter student's name: ";
            gets(name);
            cout<<"Enter student's age: ";
            cin>>age;
            fflush(stdin);
            cout<<"Enter student's gender: ";
            gets(gender);
        }
        void showData(){
            cout<<endl<<"Student's name is: "<<name;
            cout<<endl<<"Student's age is: "<<age;
            cout<<endl<<"Student's gender is: "<<gender;
        }
};
class Student2:public Student1{
    private:
        int roll_no;
    public:
        void inputData(){
            cout<<"Enter student's roll no.: ";
            cin>>roll_no;
        }
        void outputData(){
            cout<<endl<<"Student's roll no. is: "<<roll_no;
        }
};
class Student3:public Student2{
    private:
        char school[100];
        int fees;
    public:
        void loadData(){
            fflush(stdin);
            cout<<"Enter name of the school: ";
            gets(school);
            cout<<"Enter quarterly fees of student: ";
            cin>>fees;
        }
        void displayData(){
            cout<<endl<<"Student studies in: "<<school;
            cout<<endl<<"Student's quarterly fees: "<<fees;
        }
};
int main(){
    Student3 obj;
    obj.getData();
    obj.inputData();
    obj.loadData();
    cout<<endl<<endl<<"Details of student are...";
    obj.showData();
    obj.outputData();
    obj.displayData();
}