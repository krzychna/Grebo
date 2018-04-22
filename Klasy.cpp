//
// Created by krzylap on 19.04.18.
//
#include "Klasy.h"
Wsk& Wsk::operator=(Wsk& drugi){
    this->wsk = drugi.wsk;
    return *this;
}

Wsk::Wsk() : wsk{nullptr}{}

Wsk::Wsk(Objekt &wskaznik): wsk{&wskaznik}{}