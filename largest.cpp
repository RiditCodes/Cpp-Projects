#include<iostream>
using namespace std;

int main(){
    int max = 0, n;
    cout<<"Enter no. of no.s to compare: ";
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cout<<"Enter no.: ";
        cin>>arr[i];
    }

    for(int i = 0; i <= n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Largest no. is: "<<max;
}