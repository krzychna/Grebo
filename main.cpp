#include <iostream>
using namespace std;


double *kreator_tablicy(int rozmiar);
void fun (double *tab1,double *tab2, double *tab3, int rozmiar);

int main() {
    auto *wsk = new int;
    const int rozmiar = 20;
    double *wsk1 = kreator_tablicy(rozmiar);
    double *wsk2 = kreator_tablicy(rozmiar);
    double *wsk3 = kreator_tablicy(rozmiar);
    for (int i = 0; i <rozmiar ; ++i) {
        *(wsk1+i) = i;
        *(wsk2+i) = 2*i;

    }
    fun(wsk1,wsk2,wsk3,rozmiar);
    for (int j = 0; j <rozmiar ; ++j) {
        cout<<"wsk1 :"<<j<<". "<<*(wsk1+j);
        cout<<"\twsk2 :"<<j<<". "<<*(wsk2+j);
        cout<<"\twsk3 :"<<j<<". "<<*(wsk3+j)<<endl;
    }

    delete[] wsk1;
    delete[] wsk2;
    delete[] wsk3;

}

double *kreator_tablicy(int rozmiar){
    return new double[rozmiar];
}
void fun (double *tab1,double *tab2, double *tab3, int rozmiar){
    for (int i = 0; i <rozmiar ; ++i) {
        *(tab3+i) = *(tab1+i)*(*(tab2+i));
    }
}