//
// Created by d-sava on 17. 8. 2026..
//

#include "main.h"
#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

/*
{
    class NasaKlasa{

    private:
    ****
    ****
    ****
    public:
    ****
    ****
    ****
    returnType operator simbol (arg){
        ****
        ****
        ****
        returnType - povratni tip funkcije
        operator - kljucna rec
        simbol - simbol koji zelite da preklopite <> <= >= + - ++ itd...
        !!! ZABRANJENO !!! operatori koje ne mozete da preklopite - ima ih 4
        i to su:
        1) :
        2) ::
        3) *
        4) ?
        5)?:
    }
}
*/
//
// class Kompleksni {
//
// private:
//     float real, img;
//
// public:
//     Komleksni() : real(0), img(0){}
//
//     void input() {
//         cout << "Unesite vrednost za realni i imaginarni deo broja: " << endl;
//         cin >> real;
//         cin >> img;
//     }
//
//     void output() {
//         if (img)
//             cout << "Kompleksni broj je: " << real << img << "i" << endl;
//         else
//             cout << "Kompleksni broj je: " << real << " + " << img << "i" << endl;
//     }
//
//     Kompleksni operator + (const Kompleksni& obj) {
//
//         Kompleksni temp;
//         temp.real = real + obj.real;
//         temp.img = img + obj.img;
//         return temp;
//     }
// };
//
// class Kutija {
//
// private:
//     double duzina, sirina, visina;
// public:
//     Kutija(double d, double s, double v) {
//         this->duzina = d;
//         this->sirina = s;
//         this->visina = v;
//     }
//
//     double zapremina() const {
//         return duzina * sirina * visina;
//     }
//
//     int poredi(const Kutija& kutija) {
//         if (zapremina() < kutija.zapremina()) {return -1;}
//         if (zapremina() == kutija.zapremina()){return 0;}
//         return 1;
//     }
//
//     bool operator < (const Kutija& kutija) const {
//         return zapremina() < kutija.zapremina();
//     }
// };

int main() {

    // Kompleksni k1, k2, rez;
    //
    // cout << "Unesite vrednost za prvi komleksni broj " << endl;
    // cin >> k1.input();
    //
    // cout << "Unesite vrednost za drugi komleksni broj " << endl;
    // cin >> k2.input();
    //
    // rez = k1 + k2;
    // rez.output();
    //
    // Kutija kutija[4];
    //
    // kutije[0] = Kutija(1.0, 2.0, 3.0);
    // kutije[1] = Kutija(4.0, 2.0, 5.0);
    // kutije[2] = Kutija(1.0, 1.0, 2.0);
    // kutije[3] = Kutija(3.0, 5.0, 3.0);
    //
    // Kutija najmanja = kutija[0];
    //
    // for (int i = 1; i < 4; i++) {
    //     if (kutije[i] < najmanja)
    //         najmanja = kutije[i];
    // }
    //
    // cout << "Kutija sa najmanjom zapreminom ima zapreminu: " << najmanja.zapremina() << endl;
    // //STL - tempalte klasa i funkcija, podela na: iteratore, algoritme, kontejnere

    //vector<type>name;
    vector<int> someVector(3);
    vector<int> nasVektor(3);

    nasVektor[0] = 5;
    nasVektor[1] = 10;
    nasVektor[2] = 20;

    cout << "Poslednji element vektora je " << nasVektor[nasVektor.size()-1] << endl;


    vector<string> stringVektor;

    stringVektor.push_back("Rec 1");
    stringVektor.push_back("Rec 2");
    stringVektor.push_back("Rec 3");
    stringVektor.push_back("Rec 4");

    for (auto sv : stringVektor) {
        cout << sv << " " << endl;
    }

    stack<int> someStack;

    someStack.push(5);
    someStack.push(10);
    someStack.push(20);
    someStack.push(30);
    someStack.push(40);

    cout << "Kapacitet steka je: " << someStack.size() << endl;
    cout << "Vrh steka je: " << someStack.top() << endl;

    

    return 0;
}