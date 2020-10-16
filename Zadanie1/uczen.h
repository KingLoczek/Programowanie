#include <iostream>
using namespace std;
class Uczen {
public:
    string imie;
    string nazwisko;
    Uczen();
    bool zwrocObecnosc ();
    void zmienObecnosc();
    void ustawNumer(int nr);
    int zwrocNumer();
private:
    int numer;
    bool obecnosc;
};
