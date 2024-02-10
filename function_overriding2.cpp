#include<iostream>
using namespace std;

class Add{
    public:
        int Operation(int a, int b){
            return a+b;
        }
};
class Subtract:public Add{
    public:
        int Operation(int a, int b){
            return a-b;
        }
};
int main(){
    Subtract obj;
    int result = obj.Operation(5, 2);
    cout<<"Result is "<<result;
}