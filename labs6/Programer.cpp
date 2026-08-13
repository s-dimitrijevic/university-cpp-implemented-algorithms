//
// Created by neven on 13-Aug-26.
//

#include "Programer.h"
#include <iostream>

using namespace std;

//ispis podataka
void Programer::ispisiPodatke()
{
    Zaposleni::ispisiPodatke();
    cout << this->tim << " " << this->brojRadneKnjizice << endl;
}

//setteri
void Programer::setTim(string tim){this->tim = tim;}
void Programer::setBrojRadneKnjizice(string brojRadneKnjize){this->brojRadneKnjizice = brojRadneKnjizice;}

//getteri
string Programer::getTim(){return this->tim;}
string Programer::getBrRadneKnjizice(){return this->brojRadneKnjizice;}

//konstruktor
Programer::Programer(string ime, string prezime, string jmbg, string tim, string brojRadneKnjizice) : Zaposleni(ime, prezime, jmbg)
{
    this->tim = tim;
    this->brojRadneKnjizice = brojRadneKnjizice;
}

//metode
void Programer::proveriBrojRadneKnjizice(){

    int brojac = 0;

    if (this->brojRadneKnjizice.length() == 8)
    {
        if (this->brojRadneKnjizice.at(0) == 'p' || this->brojRadneKnjizice.at(0) == 'P')
            for (int i = 1; i < brojRadneKnjizice.length(), i++){
                if (i == 1 && i == 2 && i == 3){
                    if (isdigit(this->brojRadneKnjizice.at(i)))
                        brojac++;
                }
                else if (isalpha(this->brojRadneKnjizice.at(i)))
                    brojac++;
            }
    }

    if (brojac == 8)
        cout << "Broj Radne Knjizice je validan" << endl;
    else
        cout << "Broj Radne Knjizice nije validan" << endl;
}
