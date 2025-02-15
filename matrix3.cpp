#include<iostream>
using namespace std;

int main(){
    int arr1[2][3], arr2[2][3];
    bool same = false;

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

    for (int row = 0; row < 2; row++){
        for (int column = 0; column < 3; column++){
            if (arr1[row][column] == arr2[row][column]){
                same = true;
            }
            else{
                same = false;
                break;
            }
        }
    }

    if (same){
        cout<<"The matrices are the same."<<endl;
    }
    else{
        cout<<"The matrices are not the same."<<endl;
    }
}