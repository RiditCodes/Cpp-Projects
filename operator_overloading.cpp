#include<iostream>
using namespace std;

class Box{
    int length, breadth, height;
    public:
        int getVolume(){
            return length*breadth*height;
        }
        void setLength(int l){
            length = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
        void setHeight(int h){
            height = h;
        }
        Box operator+(Box b){
            Box box;
            box.length = length + b.length;
            box.breadth = breadth + b.breadth;
            box.height = height + b.height;
            return box;
        }
};
int main(){
    Box box1, box2, box3;
    int volume;
    box1.setLength(4);
    box1.setBreadth(2);
    box1.setHeight(3);
    
    box2.setLength(6);
    box2.setBreadth(4);
    box2.setHeight(5);

    box3 = box1 + box2;
    
    volume = box1.getVolume();
    cout<<"volume of box1: "<<volume;
    volume = box2.getVolume();
    cout<<"\n\nvolume of box2: "<<volume;
    volume = box3.getVolume();
    cout<<"\n\nvolume of box3: "<<volume;
}