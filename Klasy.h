//
// Created by krzylap on 19.04.18.
//

#ifndef GREBO_KLASY_H
#define GREBO_KLASY_H
#include <ostream>
class Tuplyw_czasu{
private:
    int dni;
    int godziny;
    int minuty;
    int sekundy;
public:
    friend Tuplyw_czasu operator+ (Tuplyw_czasu pierwsza, Tuplyw_czasu druga);
    friend  std::ostream& operator<<(std::ostream& cout, Tuplyw_czasu &klasa);
    friend Tuplyw_czasu operator"" _d(unsigned long long dni);
    friend Tuplyw_czasu operator"" _min(unsigned long long minuty);
    friend Tuplyw_czasu operator"" _sek(unsigned long long sekundy);
    friend Tuplyw_czasu operator"" _godz(unsigned long long godziny);
    Tuplyw_czasu();

};
#endif //GREBO_KLASY_H
