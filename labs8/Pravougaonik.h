//
// Created by d-sava on 23. 8. 2026..
//

#ifndef UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_PRAVOUGAONIK_H
#define UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_PRAVOUGAONIK_H
#include "Oblik.h"

class Pravougaonik : public Oblik{

private:
    Tacka a, b, c, d;

public:
    Pravougaonik();
    Pravougaonik(Tacka a, Tacka b, Tacka c, Tacka d);
    virtual double obiwm() const override;
    virtual double povrsina() const override;
};


#endif //UNIVERSITY_CPP_IMPLEMENTED_ALGORITHMS_PRAVOUGAONIK_H