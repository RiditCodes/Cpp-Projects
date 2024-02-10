#include<iostream>
using namespace std;

class Air_Force{
    private:
         int Air_command;
         int Regiment_5;
         int Battalion_49;
         int Elite_Aerial_Unit_1;
         int Fighter_Jets;
    public:
        Air_Force(){
            cout<<"---AIR FORCE---";
            cout<<"\nEnter no. of units in Air command: ";
            cin>>Air_command;
            cout<<"\nEnter no. of units in Regiment 5: ";
            cin>>Regiment_5;
            cout<<"\nEnter no. of units in Battalion 49: ";
            cin>>Battalion_49;
            cout<<"\nEnter no. of units in Elite Unit 1: ";
            cin>>Elite_Aerial_Unit_1;
            cout<<"\nEnter no. of Fighter Jets: ";
            cin>>Fighter_Jets;
        }
        void display_Units(){
            cout<<"\n---AIR FORCE---";
            cout<<"\nThere are "<<Air_command<<" units in the Air command";
            cout<<"\nThere are "<<Regiment_5<<" units in Regiment 5";
            cout<<"\nThere are "<<Battalion_49<<" units in Battalion 49";
            cout<<"\nThere are "<<Elite_Aerial_Unit_1<<" units in Elite Aerial Unit 1";
            cout<<"\nThere are "<<Fighter_Jets<<" Fighter Jets";
        }
};
class Army{
    private:
         int Army_command;
         int Regiment_7;
         int Battalion_23;
         int Elite_Army_Unit_3;
         int Tank_division;
    public:
        Army(){
            cout<<"\n---ARMY---";
            cout<<"\nEnter no. of units in Army command: ";
            cin>>Army_command;
            cout<<"\nEnter no. of units in Regiment 7: ";
            cin>>Regiment_7;
            cout<<"\nEnter no. of units in Battalion 23: ";
            cin>>Battalion_23;
            cout<<"\nEnter no. of units in Elite Army Unit 3: ";
            cin>>Elite_Army_Unit_3;
            cout<<"\nEnter no. of Tanks:";
            cin>>Tank_division;
        }
        void display_Units(){
            cout<<"\n---ARMY---";
            cout<<"\nThere are "<<Army_command<<" units in the Army command";
            cout<<"\nThere are "<<Regiment_7<<" units in Regiment 7";
            cout<<"\nThere are "<<Battalion_23<<" units in Battalion 23";
            cout<<"\nThere are "<<Elite_Army_Unit_3<<" units in Elite Army Unit 3";
            cout<<"\nThere are "<<Tank_division<<" Tanks";
        }
};
class Navy{
    private:
         int Navy_command;
         int Regiment_2;
         int Battalion_34;
         int Elite_Naval_Unit_7;
         int Naval_Battleships;
    public:
        Navy(){
            cout<<"\n---NAVY---";
            cout<<"\nEnter no. of units in Navy command: ";
            cin>>Navy_command;
            cout<<"\nEnter no. of units in Regiment 2: ";
            cin>>Regiment_2;
            cout<<"\nEnter no. of units in Battalion 34: ";
            cin>>Battalion_34;
            cout<<"\nEnter no. of units in Elite Naval Unit 7: ";
            cin>>Elite_Naval_Unit_7;
            cout<<"\nEnter no. of Battleships: ";
            cin>>Naval_Battleships;
        }
        void display_Units(){
            cout<<"\n---NAVY---";
            cout<<"\nThere are "<<Navy_command<<" units in the Navy command";
            cout<<"\nThere are "<<Regiment_2<<" units in Regiment 2";
            cout<<"\nThere are "<<Battalion_34<<" units in Battalion 34";
            cout<<"\nThere are "<<Elite_Naval_Unit_7<<" units in Elite Naval Unit 7";
            cout<<"\nThere are "<<Naval_Battleships<<" Battleships";
        }
};

int main(){
    Air_Force air;
    Army army;
    Navy navy;

    air.display_Units();
    army.display_Units();
    navy.display_Units();
}