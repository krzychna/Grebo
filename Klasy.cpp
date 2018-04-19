//
// Created by krzylap on 19.04.18.
//
#include "Klasy.h"

K::K():stopnie_celsjusza{0.0}, Farh_wart_bez{0.0}{};
K::K(double stopnie):stopnie_celsjusza(stopnie),Farh_wart_bez{stopnie*9.0/5.0+32}{};
K::operator double() {
    return  stopnie_celsjusza;
}
