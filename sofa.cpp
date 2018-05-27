//
// Created by krzylap on 26.05.18.
//
#include "furniture.h"
#include "sofa.h"

using namespace std;
Sofa::Sofa(int legs, int people, const std::string &color): Furniture(legs,people,color) {
    no_sofa++;
}

void Sofa::usiadz() {
    cout<<"Siadam na sofie"<<endl;
}


