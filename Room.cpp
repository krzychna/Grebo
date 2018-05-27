//
// Created by krzylap on 27.05.18.
//

#include "Room.h"
using namespace std;
Room::Room(int chair, int coach, int sofa): chairs(chair),coachs(coach),sofas(sofa) {
    for (int i = 0; i < chair ; ++i) {
        tab_krzesla.push_back(new Chair(4,1,"blue"));
    }
    for (int i = 0; i < coach; ++i) {
        tab_kanapy.push_back(new Coach(8,4,"purple"));
    }
    for (int i = 0; i < chair ; ++i) {
        tab_sof.push_back(new Sofa(8,3,"blue"));
    }
}

Room::~Room() {
    for (int i = tab_krzesla.size()-1; i >= 0 ; i--) {
        delete tab_krzesla[i];
        cout<<"delete krzeslo: "<<i<<endl;
        tab_krzesla.pop_back();
    }
    for (int i = tab_sof.size()-1; i >= 0 ;i--) {
        delete tab_sof[i];
        cout<<"delete sofa: "<<i<<endl;
        tab_sof.pop_back();
    }
    for (int i = tab_kanapy.size()-1; i >= 0 ; i--) {
        delete tab_kanapy[i];
        cout<<"delete kanapy: "<<i<<endl;
        tab_kanapy.pop_back();
    }
}