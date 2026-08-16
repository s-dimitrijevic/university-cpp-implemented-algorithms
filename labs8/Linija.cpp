//
// Created by neven on 22-Aug-26.
//

#include "Linija.h"
#include <math.h>

Linija::Linija(){}

Linija::Linija(Tacka a, Tacka b)
{
    this->a = a;
    this->b = b;
}

double Linija::duzina(){
    return sqrt((a.getX() - b.getX()) * (a.getX() - b.getX()) +
        (a.getY() - b.getY()) * (a.getY() - b.getY()));
}