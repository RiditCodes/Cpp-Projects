#include<iostream>
using namespace std;

int main(){
    int num_rows;
    cout<<"Enter no. of rows: ";
    cin>>num_rows;

    int space = num_rows - 1;

    for (int rows = 0; rows < num_rows; rows++){
        for (int sp = 0; sp < space; sp++){
            cout<<" ";
        }

        cout<<"1 ";
        space -= 1;
        int increment = rows / 2;

        int decrement;
        if (rows % 2){
            decrement = rows / 2;
        } 
        else{
            decrement = rows / 2 - 1;
        }

        int digit = rows;
        for (int column = 0; column < increment; column++){
            cout<<digit<<" ";
            digit += 2;
        }

        if (rows % 2){
            digit -= 2;
        } 
        else{
            digit -= 4;
        }

        for (int column = 0; column < decrement; column++){
            cout<<digit<<" ";
            digit -= 2;  
        }
        
        if (rows > 0){
            cout<<"1 ";
        }
        cout<<endl;
    }

    return 0;
}

