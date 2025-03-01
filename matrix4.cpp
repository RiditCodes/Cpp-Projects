#include<iostream>
using namespace std;

int main(){
    int arr1[2][3], arr2[2][3], num;
    bool both, one, none = false;

    for (int row = 0;row < 2;row++){
        for (int col = 0;col < 3;col++){
            cout<<"Enter the element of first matrix: ";
            cin>>arr1[row][col];
        }
    }

    cout<<endl;

    for (int row = 0;row < 2;row++){
        for (int col = 0;col < 3;col++){
            cout<<"Enter the element of second matrix: ";
            cin>>arr2[row][col];
        }
    }

    cout<<"Enter a number: ";
    cin>>num;

    for (int row = 0;row < 2;row++){
        for (int column = 0;column < 3;column++){
            if (arr1[row][column] == num){
                both = true;
                one = true;
                break;
            } else {
                none = true;
            }
        }
    }

    for (int row = 0;row < 2;row++){
        for (int column = 0;column < 3;column++){
            if (arr2[row][column] == num){
                both = true;
                one = true;
                break;
            } else {
                both = false;
                none = true;
            }
        }
    }

    if (both){
        cout<<"The number is present in both matrices."<<endl;
    } else if (one){
        cout<<"The number is present in one of the matrices."<<endl;
    } else if (none){
        cout<<"The number is not present in any of the matrices."<<endl;
    }
}