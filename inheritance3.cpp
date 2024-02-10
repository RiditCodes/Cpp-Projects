#include<iostream>
using namespace std;

class BaseClass1{
    protected:
        int Area(int length, int breadth){
            return length*breadth;
        }
};
class BaseClass2{
    protected:
        int Perimeter(int length, int breadth){
            return 2*(length + breadth);
        }
};
class DerivedClass:public BaseClass1,public BaseClass2{
    public:
        int Area_Rectangle(int l, int b){
            return Area(l, b);
        }
        int Perimeter_Rectangle(int l, int b){
            return Perimeter(l, b);
        }
};
int main(){
    DerivedClass object;
    int l, b;
    cout<<"Enter the length of a rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of a rectangle: ";
    cin>>b;
    cout<<endl<<"Area of the rectangle is "<<object.Area_Rectangle(l, b);
    cout<<endl<<endl<<"Perimeter of the rectangle is: ";
    cout<<object.Perimeter_Rectangle(l, b);
}