//
// Created by d-sava on 23. 8. 2026..
//

#include "Krug.h"
#define N_PI 3.1415926535897932384626

Krug::Krug() {

    r = 0;
    centar.setX(0);
    centar.setY(0);
}

Krug::Krug(double r, Tacka t) {

    this -> r = r;
    this -> centar = t;

}

Krug::Krug(double r, double x, double y) {

    this -> r = r;
    centar.setX(x);
    centar.setY(y);

}

double Krug::obim() const {
    return 2 * r * N_PI;
}

double Krug::povrsina() const {
    return r * r * N_PI;
}

std::ostream& operator<<(ostream &os, Krug &k) {
    return out << "Nas krug ima obim: " << k.obim()
               << " i povrsinu: " << k.povrsina();
}