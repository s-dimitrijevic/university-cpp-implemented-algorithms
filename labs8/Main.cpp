//
// Created by d-sava on 23. 8. 2026..
//

#include "Main.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <string>

#include "Krug.h"
#include "Oblik.h"

using namespace std;

class KlasaB {
private:
    int brojB;
    friend int dodaj(KlasaA, KlasaB);

public:
    KlasaB() :brojB(10) {};
};

int dodaj(KlasaA, KlasaB) {
    return objA.brojA + objB.brojB;
}

class KlasaA {
private:
    int brojA;
    friend int dodaj(KlasaA, KlasaB);

public:
    KlasaA(): brojA(105) {};
};

class Vozilo {
private:
    string marka, model;
    float snagaMotora;
    string brojSasije;

public:
    Vozilo(string marka, string model, string brojSasije, float snagaMotora = 500.00) {
        this->marka = marka;
        this->model = model;
        this->snagaMotora = snagaMotora;
        this->brojSasije = brojSasije;
    }

    friend bool operator > (const Vozilo& v1, const Vozilo& v2) {
        return v1.snagaMotora > v2.snagaMotora;
    }

    friend bool operator < (const Vozilo& v1, const Vozilo& v2) {
        return v1.snagaMotora < v2.snagaMotora;
    }

    friend ostream& operator << (ostream& out, const Vozilo& v) {
        return out << v.marka << " " << v.model << " " << v.snagaMotora << " " << v.brojSasije << " " << endl;
    }
};

int main() {

    string text("Ovo je neki tekst!");
    string samoglasnici("aeiou");

    auto newItr = find_first_of(begin(text), end(text), begin(samoglasnici), end(samoglasnici));

    vector<int> newVector1{1123,12,3,12,4,1324,512,3};
    vector<int> newVector2{125623,4,132,41,23,1,23,234,5,4};

    sort(begin(newVector1), end(newVector2), greater<>());
    sort(begin(newVector2), end(newVector1), greater<>());

    vector<int> newVector3(newVector1.size() + newVector2.size());

    auto newEnd = merge(begin(newVector1), end(newVector1), begin(newVector2), end(newVector2), begin(newVector3), greater<>());

   for (auto i : finalVector)
       cout << i << " ";

    Krug krug(3.2, 2.0, 4.0);
    cout << krug;

    return 0;
}