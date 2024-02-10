#include<iostream>
using namespace std;

int fibonacci(int num);
int main(){
    int num, i;
    cout<<"Enter no. of fibonacci series: ";
    cin>>num;

    while(i < num){
      cout<<endl<<fibonacci(i);
      i++;
   }
}
int fibonacci(int num){
    if((num == 1) || (num == 0)) {
      return num;
    }
    else {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}