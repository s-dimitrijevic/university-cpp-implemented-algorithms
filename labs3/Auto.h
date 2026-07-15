//
// Created by d-sava on 9. 8. 2026..
//

#ifndef UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_AUTO_H
#define UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_AUTO_H

#include "Vozilo.h"

class Auto : public Vozilo {
    public:
        string boja;
        string brojSasije;

    void proveriBrojSasije();
    void stampajPodatkeAuto();

    Auto();
    Auto(string marka, string model, string registracije, int godinaProizvodnje, string boja, string brojSasije);
};

#endif //UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_AUTO_H
