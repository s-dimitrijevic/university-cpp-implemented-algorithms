//
// Created by neven on 13-Aug-26.
//

#ifndef UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_PROGRAMER_H
#define UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_PROGRAMER_H
#include <string>
#include "Zaposleni.h"

using namespace std;

//nasledjivanje (programer nasledjuje svojstva iz klase zaposleni)
class Programer : public Zaposleni{

private:
    //varijable
    string tim;
    string brojRadneKnjizice;

public:
    //metode
    void ispisiPodatke();
    void proveriBrojRadneKnjizice();

    //setteri
    void setTim(string);
    void setBrRadneKnjizice(string);

    //getteri
    string getTime();
    string getBrRadneKnjizice();

    //konstruktor
    Programer(string ime, string prezime, string jmbg, string tim, string brojRadneKnjizice);
};


#endif //UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_PROGRAMER_H
