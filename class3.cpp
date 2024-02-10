#include<iostream>
using namespace std;

class Test
{
    public:
        void print();
        
};
void Test::print()
{
    cout<<"print() function is defined outside the class";
    cout<<" using Scope Resolution Operator.";
}
int main()
{
    Test obj;
    obj.print();
}