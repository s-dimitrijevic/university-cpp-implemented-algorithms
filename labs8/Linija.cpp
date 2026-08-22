//
// Created by neven on 22-Aug-26.
//

#include "Linija.h"
#include <math.h>

//Konstruktor 1 - Prazan Konstruktor
Linija::Linija(){}

//Konstruktor 2 - Konstruktor sa 2 parametra
Linija::Linija(Tacka a, Tacka b)
{
    this->a = a;
    this->b = b;
}

//Konstruktor 3 - Konstruktor sa 4 parametra
Linija::Linija(double xa, double ya, double xb, double yb) {
    this->a.setX(xa);
    this->a.setY(ya);
    this->b.setX(xb);
    this->b.setY(yb);
}

//Metoda
double Linija::duzina(){
    return sqrt((a.getX() - b.getX()) * (a.getX() - b.getX()) +
        (a.getY() - b.getY()) * (a.getY() - b.getY()));
}