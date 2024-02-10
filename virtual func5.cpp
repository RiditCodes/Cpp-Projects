#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
    int area;
        virtual void Area(){
            cout<<"\nEnter length of rectangle: ";
            cin>>length;
            cout<<"\nEnter breadth of rectangle: ";
            cin>>breadth;
            
            area = length * breadth;
        }
        virtual void show(){
            cout<<"Area of rectangle is "<<area;
        }
};
class Square : public Rectangle{
    public:
    int side;
    int area;
        void Area(){
            cout<<"\nEnter side of square: ";
            cin>>side;
            
            area = side * side;
        }
        void show(){
            cout<<"Area of square is "<<area;
        }
};
int main(){
    Rectangle *rect;
    Square sq;
    rect = &sq;
    rect -> Area();
    rect -> show();
}