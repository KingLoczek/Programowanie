#include <iostream>
#include "uczen.h"
#include <vector>

using namespace std;

int main()
{
    Uczen u1;
    u1.imie="Robert";
    u1.nazwisko="Leniwy";
    u1.ustawNumer(1);

    Uczen u2;
    u2.imie="Aleksander";
    u2.nazwisko="Zakolakiewicz";
    u2.ustawNumer(2);

    Uczen u3;
    u3.imie="Bart³omiej";
    u3.nazwisko="Benkowski";
    u3.ustawNumer(3);

    Uczen u4;
    u4.imie="Tomasz";
    u4.nazwisko="Majto";
    u4.ustawNumer(4);

    Uczen u5;
    u5.imie="Daniel";
    u5.nazwisko="Raczkwoski";
    u5.ustawNumer(5);

    Uczen u6;
    u6.imie="Natalia";
    u6.nazwisko="Bak³a¿an";
    u6.ustawNumer(6);

    Uczen u7;
    u7.imie="Alicja";
    u7.nazwisko="Nazwiwskowksy";
    u7.ustawNumer(7);

    Uczen u8;
    u8.imie="Adam";
    u8.nazwisko="Brzkiewicz";
    u8.ustawNumer(8);

    Uczen u9;
    u9.imie="Anna";
    u9.nazwisko="Kowalska";
    u9.ustawNumer(9);
    u9.zmienObecnosc();

    Uczen u10;
    u10.imie="Martyna";
    u10.nazwisko="Piatek";
    u10.ustawNumer(10);

    vector<Uczen>uczniowie;
    uczniowie.push_back(u1);
    uczniowie.push_back(u2);
    uczniowie.push_back(u3);
    uczniowie.push_back(u4);
    uczniowie.push_back(u5);
    uczniowie.push_back(u6);
    uczniowie.push_back(u7);
    uczniowie.push_back(u8);
    uczniowie.push_back(u9);
    uczniowie.push_back(u10);

    for(int i=uczniowie.size()-1 ; i>=0; i--)
    {
        cout << uczniowie[i].zwrocNumer()<<" ";
        cout << uczniowie[i].imie<<" ";
        cout << uczniowie[i].nazwisko<<" ";
        bool obec = uczniowie[i].zwrocObecnosc();

        if( obec == true)
            cout << "obecny" << endl;
        else cout << "nieobecny" << endl;

    };



    return 0;
}
