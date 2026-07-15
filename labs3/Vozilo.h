//
// Created by d-sava on 9. 8. 2026..
//

#ifndef UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_VOZILO_H
#define UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_VOZILO_H


#include <string>

using namespace std;

class Vozilo {

public:
    string marka, model, registracija;
    int godinaProizvodnje;

    void stampajVozilo();
    void proveriRegstraciju();

    Vozilo();
    Vozilo(string marka, string model, string registracija, int godinaProizvodnje);

};


#endif //UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_VOZILO_H
