#include<iostream>
using namespace std;

int main(){
    int arr1[2][3], arr2[3][2], row, column;

    cout<<"Enter the elements for the 1st matrix..."<<endl;
    for (row = 0; row < 2; row++){
        for (column = 0; column < 3; column++){
            cout<<"arr1["<<row<<"]["<<column<<"]: ";
            cin>>arr1[row][column];
        }
        
    }
    cout<<"\nBefore transpose..."<<endl;
    for (row = 0;row < 2; row++){
        for (column = 0; column < 3; column++){
            cout<<arr1[row][column]<<" ";
        }
        cout<<endl;
    }

    cout<<"The transpose of the matrix is..."<<endl;
    for (row = 0; row < 3; row++){
        for (column = 0; column < 2; column++){
            arr2[row][column] = arr1[column][row];
        }
    }
    for (row = 0; row < 3; row++){
        for (column = 0; column < 2; column++){
            cout<<arr2[row][column]<<" ";
        }
        cout<<endl;
    }
}

/*

1 2 3
4 5 6

1 4
2 5
3 6

*/