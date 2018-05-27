//
// Created by krzylap on 26.05.18.
//

#ifndef GREBO_CHAIR_H
#define GREBO_CHAIR_H

#include "furniture.h"

class Chair:public Furniture{
    static int no_chair;
public:

    void usiadz() override ;
    Chair( int legs, int people, const std::string &color);
};
#endif //GREBO_CHAIR_H
