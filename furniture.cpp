//
// Created by krzylap on 26.05.18.
//

#include "furniture.h"
using namespace std;
Furniture::Furniture(int legs, int people, string color){
    this->legs=legs;
    this->people = people;
    this->color = color;
//    this->no_furniture++;
}

int Furniture::getPeople() const {
    return people;
}

const std::__cxx11::basic_string<char> &Furniture::getColor() const {
    return color;
}

int Furniture::getLegs() const {
    return legs;
}

void Furniture::usiadz() {
    cout<<"Siadam na meblu"<<endl;
}

Furniture::~Furniture() {
    cout<<__func__<<endl;
}