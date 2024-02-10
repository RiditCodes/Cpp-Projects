#include<iostream>
using namespace std;

class Square{
    int side;
    static int i;
    public:
        Square(){
            cout<<"\nEnter the side of a square "<<i++<<": ";
            cin>>side;
            if (i > 2){
                i = 1;
            }
        }
        void Area(){
            cout<<"\n\nArea of the square "<<i<<": "<<side*side;
        }
        void Perimeter(){
            cout<<"\n\nPerimeter of the square "<<i++<<": "<<4*side;
        }
};
int Square :: i = 1;

int main(){
    Square obj1, obj2;
    Square *ptr1;
    ptr1 = &obj1;
    ptr1->Area();
    ptr1->Perimeter();
    ptr1 = &obj2;
    ptr1->Area();
    ptr1->Perimeter();
}