//
// Created by krzylap on 26.05.18.
//

#ifndef GREBO_SOFA_H
#define GREBO_SOFA_H

#include "furniture.h"

class Sofa: public Furniture{
    static int no_sofa;
public:
    void usiadz() override ;
    Sofa(int legs, int people, const std::string &color);

};
#endif //GREBO_SOFA_H
