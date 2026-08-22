//
// Created by d-sava on 23. 8. 2026..
//

#ifndef UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_KRUG_H
#define UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_KRUG_H

#include <iosfwd>

#include "Oblik.h"

class Krug : public Oblik{

private:

double r;
Tacka centar;

public:

    Krug();
    Krug(double, Tacka);
    Krug(double, double, double);
    virtual double obim() const override;
    virtual double povrsina() const override;
    friend ostream& operator<<(ostream&, const Krug& k);

};


#endif //UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_KRUG_H
