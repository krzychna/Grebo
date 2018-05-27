//
// Created by krzylap on 27.05.18.
//

#ifndef GREBO_COACH_H
#define GREBO_COACH_H

#include "furniture.h"

class Coach: public Furniture{
    static int no_coach;
public:
    ~Coach() override ;
    void usiadz() override ;
    Coach(int legs, int people, const std::string &color);

};
#endif //GREBO_COACH_H
