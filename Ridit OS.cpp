#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
    system("cls");
    string password = "Hello@123";
    string username = "Ridit";
    string user_username;
    string user_password;

    string age = "10";
    string first_name = "Ridit";
    string last_name = "Agarwal";
    string address = "1722,Sector 46,Gurugram";
    string profession = "Student";
    string grade_class = "6th Researchers";

    cout<<"RIDIT OS(BETA)\n\n";
    cout<<"Enter Username: ";
    cin>>user_username;
    cout<<"Enter Password: ";
    cin>>user_password;
    cout<<endl<<endl;

    cout<<"Logging in..."<<endl;
    cout.flush();
    Sleep(2000);

    if (user_username == username && user_password == password)
    {
        ;
    }
    else
    {
        cout << "Oops, wrong username or password";
        return 0;
    }

    cout<<"You have logged in successfully";
    cout.flush();
    Sleep(1000);
    system("cls");

    cout<<"Functions: \n";
    cout<<"1) Show information\n";
    cout<<"Will add more in future update!\n\n";

    cout<<"Enter no. to do task: ";
    int task;
    cin>>task;
    if (task == 1)
    {
        cout<<"First Name: "<<first_name<<endl;
        cout<<"Last Name: "<<last_name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Profession: "<<profession<<endl;
        cout<<"Grade and Class: "<<grade_class<<endl<<endl;
        return 0;
    }
    else
    {
        cout<<"Invalid function";
        return 0;
    }
}
