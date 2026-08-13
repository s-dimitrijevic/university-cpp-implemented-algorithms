//
// Created by neven on 13-Aug-26.
//

#include "Menadzer.h"

#include <iostream>
#include <ostream>

#include "Zaposleni.h"

using namespace std;

void Menadzer::ispisiPodatke(){
    Zaposleni::ispisiPodatke();
    cout << this -> godineStaza << " " << this->brojRadneKnjiziceMenadzer() << endl;
}

Menadzer::Menadzer(string ime, string prezime, string jmbg, int godineStaza, string brojRadneKnjiziceMenadzer) : Zaposleni(ime, prezime, jmbg){
    this -> godineStaza = godineStaza;
    this -> brojRadneKnjiziceMenadzera;
}

void Menadzer::setgodineStaza(int godineStaza){this->godineStaza = godineStaza;}
void Menadzer::setBrojRadneKnjiziceMenadzer(string brojRadneKnjiziceMenadzer){this->brojRadneKnjiziceMenadzer = brojRadneKnjiziceMenadzer;}

int Menadzer::getGodineStaza(){return this->godineStaza;}
string Menadzer::getBrojRadneKnjiziceMenadzer(){return this->brojRadneKnjiziceMenadzer;}







