//
// Created by krzylap on 26.05.18.
//

#include "furniture.h"
#include "chair.h"

using namespace std;

Chair::Chair(int legs, int people, const std::string &color) : Furniture(legs, people, color) {
    no_chair++;
}

void Chair::usiadz() {
    cout<<"Siadam na krzesle"<<endl;
}