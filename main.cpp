#include <iostream>
using namespace std;
class Tpodstawowa{
protected:
    int alfa,beta;
    Tpodstawowa(int a, int b);

public:
    Tpodstawowa& operator=(const Tpodstawowa& source);
};
Tpodstawowa::Tpodstawowa(int a,int b):alfa{a},beta{b} {}

Tpodstawowa& Tpodstawowa::operator=(const Tpodstawowa &source) {
    if (this!=&source) {
        this->alfa = source.alfa;
        this->beta = source.beta;
    }
    return *this;
}

class Tpochodna: public Tpodstawowa
{
public:
    double x,y;
    Tpochodna(int a=0, int b=0, double x=0, double y=0 );
    Tpochodna&operator=(const Tpochodna & source);
    friend ostream& operator<<(ostream& ekran, Tpochodna& source );

};
Tpochodna::Tpochodna(int a, int b, double x, double y):Tpodstawowa(a,b), x{x},y{y} {
}
Tpochodna& Tpochodna::operator=(const Tpochodna &source) {
    if (this!=&source) {
        Tpodstawowa::operator=(source);
        this->x = source.x;
        this->y = source.y;
    }
    return *this;
}

ostream& operator<<(ostream& ekran, Tpochodna& source ){ 
    ekran<< source.alfa <<"\t"<<source.beta <<"\t"<<source.x <<"\t"<<source.y<<"\t";
 return ekran;
}
int main (){

    Tpochodna zloty(100,500,3.14,77.7);
    Tpochodna drugi;
    drugi = zloty;
    cout<< drugi<<endl;
    return 0;

}
