#include<iostream>
using namespace std;

class Test
{
    private:
        int a;
    public:
        void set(int x)
        {
            a = x;
        }
        int get()
        {
            return a;
        }
};
int main()
{
    Test object;
    object.set(8);
    cout<<object.get();
}