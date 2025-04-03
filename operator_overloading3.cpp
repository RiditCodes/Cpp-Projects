#include <iostream>
using namespace std;

class Increment{
    public:
        int value;
        void valuetoIncrement(){
            cout<<"Enter the value to increment: ";
            cin>>value;
        }

        Increment operator++(int){
            Increment temp;
            temp.value = value;
            value++;
            return temp;
        }
};

int main(){
    Increment obj1, obj2;
    obj1.valuetoIncrement();
    obj2 = obj1++;
    cout<<"Value before increment: "<<obj2.value<<endl;
    cout<<"Value after increment: "<<obj1.value<<endl;
}