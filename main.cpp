#include <iostream>
using namespace std;

int main (){
    int** wsk = new int*[8];
    for (int i = 0; i <8 ; ++i) {
        *(wsk+i)= new int;
        *(*(wsk+i)) = i;
        cout<<*(*(wsk+i));
    }
    for (int i = 0; i <8 ; ++i) {
        delete *(wsk+i);

    }
    delete [] wsk;
    return 0;
}

