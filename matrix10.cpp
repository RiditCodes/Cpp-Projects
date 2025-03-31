#include<iostream>
using namespace std;

int main(){
    int matrix[3][3], result[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Enter the element for matrix at position "<<i<<" "<<j<<": ";
            cin>>matrix[i][j];
        }
    }

    cout<<endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            result[i][j] = matrix[i][j] * matrix[i][j];
        }
    }

    cout<<"\nMatrix:"<<endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nResult:"<<endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matrix[i][j] != result[i][j]){
                cout<<"The matrix is not a idempotent matrix";
                return 0;
            }
        }
    }

    cout<<"The matrix is a idempotent matrix";
}