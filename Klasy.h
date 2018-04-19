//
// Created by krzylap on 19.04.18.
//

#ifndef GREBO_KLASY_H
#define GREBO_KLASY_H

#include <ostream>
class K{
    double Farh_wart_bez;
    double stopnie_celsjusza;
    friend std::ostream& operator <<(std::ostream& cout,K);
    friend K operator"" _stF(long double liczba);
public:
    K();
    K(double stopnie);
    operator double();
};
#endif //GREBO_KLASY_H
