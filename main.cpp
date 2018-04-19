#include <iostream>
#include "Klasy.h"
using namespace std;
K operator"" _stC(long double liczba);
K operator"" _stF(long double liczba);
ostream& operator <<(ostream& cout,K klasa);

int main(){
    K klasa;
    klasa = 36.6_stC;
    cout << klasa;
    cout << "100 stF to :" << 100.0_stF <<endl;
    double x = 80.0_stF;
    cout<< x;
    return 0;
}


K operator"" _stC(long double liczba){ return K(liczba);};
K operator"" _stF(long double liczba){
    K Temperatura;
    Temperatura.Farh_wart_bez = liczba;
    Temperatura.stopnie_celsjusza = (liczba-32)*5/9.0;
    return  Temperatura;
};
ostream& operator <<(ostream& cout,K klasa){
    cout<<klasa.stopnie_celsjusza<<endl;
    return cout;
};


