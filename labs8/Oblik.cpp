//
// Created by d-sava on 23. 8. 2026..
//

#include "Oblik.h"

class Oblik {

public:
    //Ovo je nacin na koji se pravi apstraktna klasa ---> napravi se cista virtuelna funkcija! Pitanje koje ce doci na kolokvijumu
    virtual double obim() const = 0;
    virtual double povrsina() const = 0;
};