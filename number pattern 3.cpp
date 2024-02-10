#include<iostream>
using namespace std;

int main(){
    int num_rows, row, col;

    cout<<"Enter no. of the rows: ";
    cin>>num_rows;

    for(row = num_rows; row >= 1; row--){
        for(col = 1; col < row; col++){
            cout<<" ";
        }
        cout<<row<<endl;
    }
}
/*
If num_rows = 8, then output will be
       8
      7
     6
    5
   4
  3
 2
1
*/