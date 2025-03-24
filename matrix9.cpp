#include<iostream>
using namespace std;

int main(){
    int matrix1[2][3], matrix2[2][3], result[2][3];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Enter the element for matrix1 at position "<<i<<" "<<j<<": ";
            cin>>matrix1[i][j];
        }
    }

    cout<<endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Enter the element for matrix2 at position "<<i<<" "<<j<<": ";
            cin>>matrix2[i][j];
        }
    }

    cout<<endl;

    cout<<"Matrix 1: "<<endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix 2: "<<endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n";

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
                result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout<<"The result of the subtraction of the two matrices is: "<<endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}