#include <iostream>
#include <cstring>

using namespace std;
char** fun ();

int main() {
    char** linijka = fun();
    for (int i = 0; i <10 ; ++i) {
        char znak[3] = { 48+i};
        *(linijka + i ) = new char[80];
        strcat(strcpy(*(linijka+i),"to jest linijka "),znak);
    }
    for (int j = 0; j <10 ; ++j) {
        cout<<*(linijka+j)<<endl;
    }
    char * zamiana = *(linijka+3);
    *(linijka+3) = *(linijka+6);
    *(linijka+6) = zamiana;
    cout<< "\n\n\n";
    for (int j = 0; j <10 ; ++j) {
        cout<<*(linijka+j)<<endl;
    }
    for (int k = 0; k <10 ; ++k) {
        delete[] *(linijka+k);
    }
    delete[] linijka;
    return 0;
}

char** fun(){
    return new char*[10];
}




