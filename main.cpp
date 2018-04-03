#include <iostream>
using namespace std;
char* fun(char* wsk, int rozmiar);

int main() {
    constexpr  int rozmiar = 10;
    char* wsk;
    char tab[rozmiar] = {" TEKST"};
    wsk =tab;
    fun(tab, rozmiar);
    for (int i = 0; i <rozmiar ; ++i) {
       cout<<*(wsk+i);
    }
    return 0;
}
char* fun(char* wsk, int rozmiar){
    constexpr int rozmiaruw = 8;
    char* zamiana = wsk;
    char* nowa = new char [rozmiar];
    int l_tekst = 0;
    char tab1[rozmiaruw] = {"UWAGA: "};
    char* wsk1 = tab1;
    while (*zamiana++)
    {
        l_tekst++;
    }
    if (rozmiaruw>=rozmiar) {
        return wsk;
    }
    if (rozmiar-rozmiaruw < 4)
    {
        for (int i = 0; i < rozmiaruw; ++i) {
            *(nowa + i) = *(wsk1 + i);
        }
        for (int i = rozmiar-1; i >rozmiar-4 ;i--) {
            *(nowa+i) = '.';
        }
    }
    else{
        for (int i = 0; i <rozmiaruw ; ++i) {
            *(nowa+i) = *(wsk1+i);
        }
        for (int j = rozmiaruw-1, i =0; j <rozmiar ; ++j) {
            *(nowa+j) = *(wsk+i++);
        }
    }
    for (int i = 0; i <rozmiar ; ++i) {
        *(wsk+i) = *(nowa+i);
    }
    delete[] nowa;
    return wsk;
}





