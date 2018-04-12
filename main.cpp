#include <iostream>
#include <vector>
#include "modul.h"
using namespace std;
int MODUL::counter = 0;

void popul (string &litery,vector <MODUL> &moduly);
int comparename(vector <MODUL> &moduly, string name);
int main() {
    vector <MODUL> moduly;
    string litery = "ABCDEFGJKLMNPQR";
    string name;
    cout<<"Wyszukaj po nazwie"<<endl;
    cin>>name;
    popul(litery,moduly);
    cout<<comparename(moduly,name);
    return 0;
}

void popul (string &litery,vector <MODUL> &moduly){
    for (int i = 0; i <litery.length() ; i++) {
        string name ({"CLUSTER_" + string({litery[i]})});
        moduly.push_back(MODUL(name));
    }
}

int comparename(vector <MODUL> &moduly, string name){
    for (int i = 0; i <moduly.size() ; ++i) {
        if (moduly[i].getnazwa() == ("CLUSTER_" + string({name}))){
            return moduly[i].getid();
        }
    }
    return -1;
}



