//
// Created by krzylap on 27.05.18.
//

#include "furniture.h"
#include "Coach.h"

using namespace std;
Coach::Coach(int legs, int people, const std::string &color): Furniture(legs,people,color) {
    no_coach++;
}

void Coach::usiadz() {
    cout<<"Siadam na kanapie"<<endl;
}