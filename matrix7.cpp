#include<iostream>
using namespace std;

int main(){
    int matrix1[3][3], matrix2[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Enter the element for matrix1 at position "<<i<<" "<<j<<": ";
            cin>>matrix1[i][j];
        }
    }

    cout<<endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Enter the element for matrix2 at position "<<i<<" "<<j<<": ";
            cin>>matrix2[i][j];
        }
    }

    cout<<endl;

    cout<<"Matrix 1: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix 2: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n";

    if (matrix1[0][0] == matrix2[0][0] && matrix1[1][1] == matrix2[1][1] && matrix1[2][2] == matrix2[2][2]){
        if (matrix1[0][3] == matrix2[0][3] && matrix1[1][2] == matrix2[1][2] && matrix1[2][1] == matrix2[2][1]){
            cout<<"The matrices are diagonally equal."<<endl;
        } else{
            cout<<"The matrices are not diagonally equal."<<endl;
        }
    } else{
        cout<<"The matrices are not diagonally equal."<<endl;
    }
}