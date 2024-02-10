#include<iostream>
#include<stdio.h>
using namespace std;

class Playlist{
    private:
        char song1[50];
        char song2[50];
        char song3[50];
        char song4[50];
        char song5[50];
    public:
        friend void Playlist_Manager();
};
void Playlist_Manager(){
    Playlist p;
    cout<<"\nEnter song 1 name: ";
    gets(p.song1);
    cout<<"\nEnter song 2 name: ";
    gets(p.song2);
    cout<<"\nEnter song 3 name: ";
    gets(p.song3);
    cout<<"\nEnter song 4 name: ";
    gets(p.song4);
    cout<<"\nEnter song 5 name: ";
    gets(p.song5);

    cout<<"\nSong 1: "<<p.song1;
    cout<<"\nSong 2: "<<p.song2;
    cout<<"\nSong 3: "<<p.song3;
    cout<<"\nSong 4: "<<p.song4;
    cout<<"\nSong 5: "<<p.song5;
}
int main(){
    Playlist_Manager();
}