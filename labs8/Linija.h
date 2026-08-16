//
// Created by neven on 22-Aug-26.
//

#ifndef UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_LINIJA_H
#define UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_LINIJA_H

#include "Tacka.h"

class Linija
{
private:
    Tacka a;
    Tacka b;

public:
    Linija();
    Linija(Tacka a, Tacka b);
    Linija(double xa, double ya, double xb, double yb);
    double duzina();
};


#endif //UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_LINIJA_H
