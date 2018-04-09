#include <iostream>
#include <string>
using namespace std;
int main(){
    string stacja1;
    string stacja2;
    int klasa =2;
    cout<<"Skad jedziesz?\n";
    cin>>stacja1;
    cout<<"Dokad jedziesz?\n";
    cin>>stacja2;
    cout<<"Jaka klasa?\n";
    cin>>klasa;
    string kreska = "*" +string(48,'-') + "*";
    string komunikat = "|" + stacja1 + "--->" +stacja2+ ", klasa" + to_string(klasa);
    string spacje = string(49-komunikat.size(),' ') + "|";
    cout<< kreska<<endl;
    cout<< komunikat<<spacje<<endl;
    cout<<kreska;
}

