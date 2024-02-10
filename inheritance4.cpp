#include<iostream>
using namespace std;

class Base1{
    protected:
        int add(int x, int y){
            return x + y;
        }
        int subtract(int x, int y){
            return x - y;
        }
};
class Base2{
    protected:
        int multiply(int x, int y){
            return x * y;
        }
        int divide(int x, int y){
            return x / y;
        }
};
class Calculator:public Base1, public Base2{
    private:
        int choice;
    public:
        int calulator(int num1, int num2){
            cout<<"Choose function to perform: ";
            cout<<endl<<"[1] Add"<<endl<<"[2] Subtract"<<endl<<"[3] Multiply"<<endl<<"[4] Divide"<<endl;
            cin>>choice;

            if (choice == 1){
                 return add(num1, num2);
            }
            if (choice == 2){
                 return subtract(num1, num2);
            }
            if (choice == 3){
                 return multiply(num1, num2);
            }
            if (choice == 4){
                 return divide(num1, num2);
            }
            if (choice < 1 || choice > 4){
                cout<<"Incorrect function number! Please try again later.";
                return 0;
            }
        }
};
int main(){
    Calculator obj;
    int num1, num2, answer;
    cout<<"Enter no.: ";
    cin>>num1;
    cout<<"Enter another no.: ";
    cin>>num2;

    answer = obj.calulator(num1, num2);

    cout<<endl<<"The result is: "<<answer;
}