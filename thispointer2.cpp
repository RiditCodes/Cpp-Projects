#include<iostream>
using namespace std;

class Calculator{
    private:
        int num;
    public:
        Calculator(int n){
            num = n;
        }
        int add(Calculator calc){
            return this->num+calc.num;
        }
        int subtract(Calculator calc){
            return this->num-calc.num;
        }
        int multiply(Calculator calc){
            return this->num*calc.num;
        }
        int divide(Calculator calc){
            return this->num/calc.num;
        }
};
int main(){
    int n1, n2, choice;
    int result;
    cout<<"\nEnter a number: ";
    cin>>n1;
    Calculator num1(n1);
    cout<<"\nEnter another number: ";
    cin>>n2;
    Calculator num2(n2);
    cout<<"\nEnter your choice{1-add, 2-sub, 3-mul, 4-div}: ";
    cin>>choice;
    if(choice == 1){
        result = num1.add(num2);
        cout<<n1<<" + "<<n2<<" = "<<result;
    } else if (choice == 2){
        result = num1.subtract(num2);
        cout<<n1<<" - "<<n2<<" = "<<result;
    } else if (choice == 3){
        result = num1.multiply(num2);
        cout<<n1<<"*"<<n2<<" = "<<result;
    } else if (choice == 4){
        result = num1.divide(num2);
        cout<<n1<<"/"<<n2<<" = "<<result;
    }
}