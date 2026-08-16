//
// Created by neven on 13-Aug-26.
//

#ifndef UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_MENADZER_H
#define UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_MENADZER_H
#include <string>
#include "Zaposleni.h"

using namespace std;

//nasledjivanje
class Menadzer : public Zaposleni{

private:
    //varijable
    int godineStaza;
    string brojRadneKnjiziceMenadzer;

public:
    //metode
    void ispisiPodatke();
    void proveriBrRadneKnjiziceMenadzer();

    //getteri
    int getGodineStaza();
    string getBrojRadneKnjiziceMenadzer();

    //setteri
    void setgodineStaza(int godineStaza);
    void setbrojRadneKnjiziceMenadzer();

    //konstruktor
    Menadzer(string ime, string prezime, string jmbg, int godineStaza, string brojRadneKnjiziceMenadzer);
};


#endif //UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_MENADZER_H
