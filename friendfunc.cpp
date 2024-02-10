#include<iostream>
using namespace std;

class Temperature{
    private:
        int celsius;
    public:
        friend int display();
};
int display(){
    Temperature t;
    t.celsius = 10;
    return t.celsius;
}
int main(){
    cout<<"Celsius: "<<display();
}