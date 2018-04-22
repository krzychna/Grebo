//
// Created by krzylap on 19.04.18.
//

#ifndef GREBO_KLASY_H
#define GREBO_KLASY_H
#include <ostream>
#include "Klasy2.h"
class Wsk{
public:
    Objekt* wsk;
    Wsk& operator=(Wsk& drugi);
    Wsk();
    Wsk(Objekt& wskaznik);
};




#endif //GREBO_KLASY_H
