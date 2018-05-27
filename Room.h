//
// Created by krzylap on 27.05.18.
//

#ifndef GREBO_ROOM_H
#define GREBO_ROOM_H


#include <vector>
#include "Coach.h"
#include "sofa.h"
#include "chair.h"

class Room {
    int coachs;
    int sofas;
    int chairs;

public:
    std::vector <Coach*> tab_kanapy;
    std::vector <Chair*> tab_krzesla;
    std::vector <Sofa*> tab_sof;
    Room(int chair, int coach, int sofa);
    ~Room();
};


#endif //GREBO_ROOM_H
