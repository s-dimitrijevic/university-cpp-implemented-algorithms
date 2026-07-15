//
// Created by d-sava on 9. 8. 2026..
//
#include "Auto.h"
#include <iostream>

using namespace std;

Auto::Auto(){}

Auto::Auto(string marka, string model, string registracije, int godinaProizvodnje, string boja, string brojSasije)
    : Vozilo(marka, model, registracija, godinaProizvodnje){
    this->boja=boja;
    this->brojSasije=brojSasije;
}

void Auto::stampajPodatkeAuto() {
    stampajVozilo();
    cout << this->boja << " " << this->brojSasije << endl;
}
