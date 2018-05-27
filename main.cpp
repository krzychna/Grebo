#include <iostream>
#include "chair.h"
#include "sofa.h"
#include "Coach.h"

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
    Chair krzeslo(4,1,"green");
    Sofa sofa(8,3,"blue");
    Coach kanapa (8,4,"black");

    cout<<krzeslo;
    cout<<sofa;
    cout<<kanapa;

    Furniture* tab[3];
    tab[0] =&krzeslo;
    tab[1] =&sofa;
    tab[2] =&kanapa;

    for (int i = 0; i <3 ; ++i) {
        tab[i]->usiadz();
    }



    return 0;
}