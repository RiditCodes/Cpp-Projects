#include<iostream>
using namespace std;

class Test
{
    private:
        int product;
    public:
        int multiplication(int n1, int n2);
};
int Test::multiplication(int n1, int n2)
{
    product = n1 * n2;
    return product;
}
int main()
{
    Test obj;
    int num1, num2;

    cout<<"Enter a no.: ";
    cin>>num1;
    cout<<"Enter a no.: ";
    cin>>num2;

    int product = obj.multiplication(num1, num2);
    cout<<product;
}
