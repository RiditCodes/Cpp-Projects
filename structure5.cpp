#include<iostream>
#include<stdio.h>
using namespace std;

struct book
{
    char name[50];
    char author[50];
    int pages;
};
struct book_price
{
    struct book b;
    float price;
}
p1 = {"ASP.NET", "Wrox", 450,600.70},
p2 = {"C++", "Ashutosh", 560,500.44};
int main()
{
    cout<<"Book details: \nName: "<<p1.b.name;
    cout<<"\nAuthor: "<<p1.b.author;
    cout<<"\nNo. of pages: "<<p1.b.pages;
    cout<<"\nPrice: "<<p1.price;

    cout<<"\nBook details: \nName: "<<p2.b.name;
    cout<<"\nAuthor: "<<p2.b.author;
    cout<<"\nNo. of pages: "<<p2.b.pages;
    cout<<"\nPrice: "<<p2.price;
}