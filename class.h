//
// Created by krzylap on 14.04.18.
//

#ifndef GREBO_CLASS_H
#define GREBO_CLASS_H

#include "iostream"
using namespace std;
class K {
public:
    double kondensator[70]{};
    static int i;
    K();
};
K::K(){
    i++;
    for (int j = 0; j <70 ; j++) {
        kondensator[j] = i*100+ j;
    }
};
#endif //GREBO_CLASS_H
