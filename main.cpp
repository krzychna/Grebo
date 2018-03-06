#include <iostream>
using namespace std;
int main() {
    int *wsk;
    int wsk_n = 0xa2ff4;
    wsk = reinterpret_cast<int*> (wsk_n);
    wsk = nullptr;
    cout << wsk;
    return 0;
}
