//
// Created by dimit on 8.7.2026..
//

#include "Main.h"
#include <iostream>
#include <cmath>

int main()
{
    double mesecnaRata;
    double mesecnaKamata;
    double iznosKredita;
    double godisnjaKamata;
    int brojRata;

    std::cout << "Unesite zeljeni iznos kredita: (decimalni broj)" << std::endl;
    std::cin >> iznosKredita;

    std::cout << "Unesite godisnju kamatu (descimalni broj): " << std::endl;
    std::cin >> godisnjaKamata;

    mesecnaKamata = godisnjaKamata / 1200;

    std::cout << "Unesite zeljeni broj godina otplate kredita: " << std::endl;
    std::cin >> brojRata;

    brojRata *= 12;

    //Racunannje mesecne rate
    mesecnaRata = (iznosKredita * mesecnaKamata) / (1-1/std::pow(1 + mesecnaKamata, brojRata));
    double ukupnoVraceno = mesecnaRata * brojRata;

    //Formatiranje izlaza na dve decimale
    mesecnaRata = static_cast<int>(mesecnaRata*100) / 100.0;
    ukupnoVraceno = static_cast<int>(ukupnoVraceno * 100) / 100.0;

    //Prikaz rezultata
    std::cout << "Mesecna rata: " << mesecnaRata << "\nUkupno ste otplatili " << ukupnoVraceno << std::endl;
}
