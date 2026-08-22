//
// Created by d-sava on 23. 8. 2026..
//

#include "Pravougaonik.h"

#include "Linija.h"

Pravougaonik::Pravougaonik(){}

Pravougaonik::Pravougaonik(Tacka a, Tacka b, Tacka c, Tacka d) {

    this -> a = a;
    this -> b = b;
    this -> c = c;
    this -> d = d;

}

double Pravougaonik::povrsina() const {

    Linija linija_ab = Linija(a,b);
    Linija linija_cd = Linija(c,d);

    double a = linija_ab.duzina();
    double b = linija_cd.duzina();

    return a * b;
}

double Pravougaonik::obim() const {

    Linija linija_ab = linija(a,b);
    Linija linija_cd = linija(c,d);

    double a = linija_ab.duzina();
    double b = linija_cd.duzina();

    return 2 * a + 2 * b;
}