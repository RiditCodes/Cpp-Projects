#include<iostream>
using namespace std;

class Library{
    int total_no_of_books, no_of_books_borrowed;
    public:
        void get_total_no_of_books(int t){
            total_no_of_books = t;
        }
        void get_no_of_borrowed_books(int b){
            no_of_books_borrowed = b;
        }
        int no_of_books_left(){
            int no_left = total_no_of_books - no_of_books_borrowed;
            return no_left;
        }
        Library operator+(Library l){
            Library lib;
            lib.total_no_of_books = total_no_of_books + l.total_no_of_books;
            lib.no_of_books_borrowed = no_of_books_borrowed + l.no_of_books_borrowed;
            return lib;
        }
};
int main(){
    Library non_fiction, fiction, comics, reference, filler, filler2, total;
    int total_no_of_books_left;

    fiction.get_total_no_of_books(50);
    fiction.get_no_of_borrowed_books(20);

    non_fiction.get_total_no_of_books(30);
    non_fiction.get_no_of_borrowed_books(15);

    comics.get_total_no_of_books(15);
    comics.get_no_of_borrowed_books(10);

    reference.get_total_no_of_books(40);
    reference.get_no_of_borrowed_books(40);

    filler = fiction + comics;
    filler2 = non_fiction + reference;
    total = filler + filler2;

    total_no_of_books_left = total.no_of_books_left();
    cout<<total_no_of_books_left;
}