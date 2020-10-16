#include "uczen.h"
Uczen::Uczen(){
    obecnosc = true;
}
bool Uczen::zwrocObecnosc(){
    return obecnosc;
}
void Uczen::zmienObecnosc(){
    if (obecnosc==true)
        obecnosc=false;
    else
        obecnosc=true;
}
int Uczen::zwrocNumer(){
    return numer;
}
void Uczen::ustawNumer(int nr){
    numer=nr;
}
