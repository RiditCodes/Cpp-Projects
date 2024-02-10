#include<iostream>
using namespace std;

int main(){
    int num_rows, row, col, num = 1;

    cout<<"Enter no. of the rows: ";
    cin>>num_rows;

    for(row = num_rows; row >= 1; row--){
        for(col = 1; col <= row; col++){
            if(num == 10){
                num = 0;
            }
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}
/*
When we run the program, if num_rows = 4,
1234
567
89
0
*/