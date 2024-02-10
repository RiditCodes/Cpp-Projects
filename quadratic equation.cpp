#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout<<"Enter coefficients of Quadratic Equation: ";
    cin>>a>>b>>c;
    discriminant = b*b-4*a*c;
    if (discriminant > 0){
        x1 = (-b+sqrt(discriminant))/(2*a);
        x2 = (-b-sqrt(discriminant))/(2*a);
    }
    else if(discriminant==0){
        x1 = x2 = -b/(2*a);
    }
    else{
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        x1 = realPart + imaginaryPart;
        x2 = realPart - imaginaryPart;
    }
    cout<<("\n\nx1 = %f", x1);
    cout<<"\n";
    cout<<("\n\n\nx2 = %f", x2);
    cout<<"\nDiscriminant is: "<<discriminant;
}