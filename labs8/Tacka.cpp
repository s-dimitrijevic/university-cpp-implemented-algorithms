//
// Created by neven on 22-Aug-26.
//

#include "Tacka.h"
#include <math.h>
#include <iostream>

using namespace std;

Tacka::Tacka()
{
    x = 0;
    y = 0;
}

Tacka::Tacka(double x, double y){this->x = x; this->y = y;}

void Tacka::setX(double x){this->x = x;}
void Tacka::setY(double y){this->y = y;}

double Tacka::getX(){return this->x;}
double Tacka::getY(){return this->y;}

double Tacka::razdaljinaOdTacke(Tacka t){
    return sqrt(x*x + y*y);
}
