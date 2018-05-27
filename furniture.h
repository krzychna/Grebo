//
// Created by krzylap on 26.05.18.
//
#include <iostream>
#include <string>
#ifndef GREBO_MEBEL_H
#define GREBO_MEBEL_H

class Furniture{

private:

    int legs;
    int people;
    std::string color;
    static int no_furniture;

protected:
    Furniture(int legs,int people,std::string color);

public:
    int getLegs() const;

    int getPeople() const;

    const std::string &getColor() const;

    virtual void usiadz();
    virtual ~Furniture();
};
#endif //GREBO_MEBEL_H
