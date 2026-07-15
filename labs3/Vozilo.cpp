//
// Created by d-sava on 9. 8. 2026..
//

#include "Vozilo.h"
#include <string>
#include <iostream>

using namespace std;

void ::Vozilo::stampajVozilo() {
    cout << "Info: "
                     << this->marka << " "
                     << this ->model << " "
                     << this->registracija << " "
                     << this->godinaProizvodnje << " "
    << "\n";
}

void ::Vozilo::proveriRegstraciju() {

    int brojac = 0;

    if (registracija.length() == 10) {

        for (int i = 0; i < 10; i++) {
            if (isdigit(registracija.at(i))) {
                brojac++;
            }
        }
    }

    if (brojac == 10)
        cout << "Format je dobar!" << endl;
    else {
        cout << "Format nije dobar!" << endl;
    }
}

Vozilo::Vozilo() {}
Vozilo::Vozilo(string marka, string model, string registracija, int godinaproizvodnje) {
    this->marka = marka;
    this->model = model;
    this->registracija = registracija;
    this->godinaproizvodnje = godinaproizvodnj;
}

class Vozilo {
    
}