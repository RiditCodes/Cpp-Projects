#include<iostream>
using namespace std;

int main(){
    int matrix[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Enter the element at position "<<i<<" "<<j<<": ";
            cin>>matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    if (matrix[0][0] == matrix[1][1] == matrix[2][2] and matrix[0][2] == matrix[1][1] == matrix[2][0]){
        cout<<"The matrix is diagonal matrix";
    }
    else{
        cout<<"The matrix is not diagonal matrix";
    }
}