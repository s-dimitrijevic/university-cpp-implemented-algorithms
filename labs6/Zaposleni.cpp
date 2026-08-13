//
// Created by neven on 13-Aug-26.
//

#include "Zaposleni.h"
#include <iostream>

using namespace std;

void Zaposleni::ispisiPodatke(){
    cout << this->ime << " " << this->prezime << " " << this->jmbg << endl;
}

Zaposleni::Zaposleni(string ime, string prezime, string jmbg)
{
    this -> ime = ime;
    this -> prezime = prezime;
    this -> jmbg = jmbg;
}

void Zaposleni::setIme(string ime){
        this->ime = ime;
}

void Zaposleni::setPrezime(string prezime){
    this->prezime = prezime;
}

void Zaposleni::setJmbg(string jmbg){
    this->jmbg = jmbg;
}

string Zaposleni::getIme(){
    return this->ime;
}

string Zaposleni::getPrezime(){
    return this->prezime;
}

string Zaposleni::getJmbg(){
    return this->jmbg;
}
