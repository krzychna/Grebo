#include <iostream>
using namespace std;
#include <vector>

bool zgiecie_ramienia();
bool obrot_ramienia();

bool zgiecie_przedramienia();
bool obrot_przedramienia();

bool zgiecie_nadgarstka();
bool obrot_nadgarstka();

int wybor =0;
int main() {
    vector <bool (*)()> sekwencja_wsk;
    vector <double> sekwencja_kat;
    double kat;
    while(true){
        cout<<"Podaj kolejnosc funkcji w jakiej maja sie wykonac"
                "\n"
                "Do wyboru: \n"
                "[1] zgiecie_ramienia \n"
                "[2] obrot_ramienia \n"
                "[3] zgiecie_przedramienia \n"
                "[4] obrot_przedramienia \n"
                "[5] zgiecie_nadgarstka \n"
                "[6] obrot_nadgarstka \n"
                "[7] Wykonaj wybrana sekwencje\n"
                "[8] Wyczysc\n"
                "[0] Koniec\n";
        cin>>wybor;
        switch  (wybor){
            case 0:
                return 0;
            case 1:
                sekwencja_wsk.push_back(&zgiecie_ramienia);
                cin>>kat;
                sekwencja_kat.push_back(kat);
                break;
            case 2:
                sekwencja_wsk.push_back(&obrot_ramienia);
                cin>>kat;
                sekwencja_kat.push_back(kat);
                break;
            case 3:
                sekwencja_wsk.push_back(&zgiecie_przedramienia);
                cin>>kat;
                sekwencja_kat.push_back(kat);
                break;
            case 4:
                sekwencja_wsk.push_back(&obrot_przedramienia);
                cin>>kat;
                sekwencja_kat.push_back(kat);
                break;
            case 5:
                sekwencja_wsk.push_back(&zgiecie_nadgarstka);
                cin>>kat;
                sekwencja_kat.push_back(kat);
                break;
            case 6:
                sekwencja_wsk.push_back(&obrot_nadgarstka);
                cin>>kat;
                sekwencja_kat.push_back(kat);
                break;
            case 7:
                for (int i = 0; i < sekwencja_wsk.size() ; i++) {
                    (sekwencja_wsk[i])();
                    cout<<"o "<< sekwencja_kat[i] <<" stopni"<<endl;
                }
                break;
            case 8:
                sekwencja_wsk.clear();
                sekwencja_kat.clear();
                break;
        }
    }

    return 0;

}


bool zgiecie_ramienia(){
    cout<<"zgiecie_ramienia ";
    return true;
}
bool obrot_ramienia(){
    cout<<"obrot_ramienia ";
    return true;
}

bool zgiecie_przedramienia(){
    cout<<"zgiecie_przedramienia ";
    return true;
}
bool obrot_przedramienia(){
    cout<<"obrot_przedramienia ";
    return true;
}

bool zgiecie_nadgarstka(){
    cout<<"zgiecie_nadgarstka ";
    return true;
}
bool obrot_nadgarstka(){
    cout<<"obrot_nadgarstka ";
    return true;
}


