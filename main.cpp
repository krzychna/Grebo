#include <iostream>
#include <vector>
#include "chair.h"
#include "sofa.h"
#include "Coach.h"
#include "Room.h"

using namespace std;

int Chair::no_chair = 0;
int Sofa::no_sofa = 0;
int Coach::no_coach = 0;

ostream& operator<<(ostream& cout, Furniture &furniture){
    cout<<"Number of legs: "<<furniture.getLegs()<<endl;
    cout<<"How many people can sit: "<<furniture.getPeople()<<endl;
    cout<<"Color: "<<furniture.getColor()<<endl<<endl;
    return cout;
}


int main(){
    Room pokoj(1,1,1);
    Furniture* tablica[3];
    tablica[0] = pokoj.tab_sof[0];
    tablica[1] = pokoj.tab_krzesla[0];
    tablica[2] = pokoj.tab_kanapy[0];

    for (int i = 0; i <3 ; ++i) {
        tablica[i]->usiadz();
    }


    return 0;
}