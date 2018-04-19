#include <iostream>
using namespace std;
#include "Klasy.h"
ostream& operator<<(ostream& cout, Tuplyw_czasu &klasa);
Tuplyw_czasu operator"" _sek(unsigned long long sekundy);
Tuplyw_czasu operator"" _min(unsigned long long minuty);
Tuplyw_czasu operator"" _godz(unsigned long long godziny);
Tuplyw_czasu operator"" _d(unsigned long long dni);

int main(){
    Tuplyw_czasu czas = 3_sek + 1_min;
    cout<<"Krotszy czas= " << czas <<endl;
    czas = czas + 24_godz + 2_d + 5_godz;
    cout<<"Dluzszy czas= " << czas <<endl;
    return 0;
}

Tuplyw_czasu operator+ (Tuplyw_czasu pierwsza, Tuplyw_czasu druga){
    Tuplyw_czasu wynik;
    wynik.dni = pierwsza.dni + druga.dni;
    wynik.godziny = pierwsza.godziny + druga.godziny;
    wynik.minuty = pierwsza.minuty + druga.minuty;
    wynik.sekundy = pierwsza.sekundy+ druga.sekundy;
    return wynik;
}
ostream& operator<<(ostream& cout, Tuplyw_czasu &klasa){
    cout<<klasa.dni*3600*24 +klasa.godziny*60*60 + klasa.minuty*60 + klasa.sekundy;
    return cout;
}
Tuplyw_czasu operator"" _d(unsigned long long dni){
    Tuplyw_czasu czas;
    czas.dni = dni;
    return czas;
}
Tuplyw_czasu operator"" _godz(unsigned long long godziny){
    Tuplyw_czasu czas;
    czas.godziny= godziny;
    return czas;
}
Tuplyw_czasu operator"" _min(unsigned long long minuty){
    Tuplyw_czasu czas;
    czas.minuty = minuty;
    return czas;
}
Tuplyw_czasu operator"" _sek(unsigned long long sekundy){
    Tuplyw_czasu czas;
    czas.sekundy = sekundy;
    return czas;
}
