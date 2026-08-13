//
// Created by neven on 13-Aug-26.
//

#ifndef UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_ZAPOSLENI_H
#define UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_ZAPOSLENI_H
#include <string>

using namespace std;

class Zaposleni{

private:
    string ime, prezime, jmbg;

public:
    void ispisiPodatke();

    void setIme(string ime);
    void setPrezime(string prezime);
    void setJmbg(string jmbg);

    string getIme();
    string getPrezime();
    string getJmbg();

    Zaposleni(string ime, string prezime, string jmbg);
};


#endif //UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_ZAPOSLENI_H
