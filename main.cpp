#include <iostream>
using namespace std;

void fun (double *tab1,double *tab2, double *tab3, int rozmiar);

int main() {
    const int rozmiar = 20;
    double *wsk1 = new double[rozmiar];
    double *wsk2 = new double[rozmiar];
    double *wsk3 = new double[rozmiar];
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


void fun (double *tab1,double *tab2, double *tab3, int rozmiar){
    for (int i = 0; i <rozmiar ; ++i) {
        *(tab3+i) = *(tab1+i)*(*(tab2+i));
    }
}