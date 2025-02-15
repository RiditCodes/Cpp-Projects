#include<iostream>
using namespace std;

int main(){
    int arr1[2][3], arr2[2][3];

    for(int row = 0;row < 2; row++){
        for(int column = 0; column < 3; column++){
            cout<<"Enter a number: ";
            cin>>arr1[row][column];
        }
    }

    cout<<endl;

    for (int row = 0; row < 2; row++){
        for (int column = 0; column < 3; column++){
            cout<<"Enter a number: ";
            cin>>arr2[row][column];
        }
    }

    for(int row = 0;row < 2; row++){
        for(int column = 0; column < 3; column++){
            cout<<arr1[row][column] + arr2[row][column]<<" ";
        }
        cout<<endl;
    }
}