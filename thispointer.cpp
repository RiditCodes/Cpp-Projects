#include<iostream>
using namespace std;

class Box{
    private:
        int length, height, breadth;
    public:
        Box(int l, int b, int h){
            length = l;
            breadth = b;
            height = h;
        }
        int getVolume(){
            return length*breadth*height;
        }
        int compare(Box box){
            return this->getVolume()>=box.getVolume();
        }
};
int main(){
    int length, breadth, height;
    cout<<"Enter length, breadth and height of box1: ";
    cin>>length>>breadth>>height;
    Box box1(length, breadth, height);
    cout<<"\nEnter length, breadth and height for box2: ";
    cin>>length>>breadth>>height;
    Box box2(length, breadth, height);
    if(box1.compare(box2)){
        cout<<"\nbox2 is equal to or smalller than box1";
    } else{
        cout<<"\nbox2 is larger than box1";
    }
}