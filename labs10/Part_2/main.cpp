//
// Created by neven on 05-Sep-26.
//

#include "main.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vozilo {

    string marka, model;
    float snagaMotora;

protected:
    string regBroj;

public:
    Vozilo(string marka, string model, string regBroj, float snagaMotora = 500.00) {

        this->marka = marka;
        this->model = model;
        this->brojRegistracije = regBroj;
    }

    virtual bool proveriBrojReg() = 0;//svaka klasa koja nasledju Vozilo implementirace ovu funkciju-

    friend bool operator > (const Vozilo& a,const Vozilo& b) {
        return a.snagaMotora > b.snagaMotora;
    }

    friend ostream& operator << (ostream& out, const Vozilo& v) {
        return out << " [" << v.marka << " " << v.model << " " << v.regBroj << " " << v.snagaMotora << "]" << endl;
    }
};

class Dvotockas : public Vozilo {
public:
    using Vozilo::Vozilo;

    bool proveriBrojReg() override {

        int n = regBroj.length();

        if (n < 4)
            return false;

        if (regBroj[0] != regBroj[n-1] || regBroj[1] != regBroj[n-2])
            return false;

        for (int i = 2; i < n-2; i++) {
            if (isupper(regBroj[i]))
                return false;
        }
    }
};

class Cetvorotockas : public Vozilo {

    public:
    using Vozilo::Vozilo;

    bool proveriBrojReg() override {

        int n = regBroj.length();

        if (n < 8)
            return false;

        if (regBroj[0] != regBroj[n-1] || regBroj[1] != regBroj[n-2]
            || regBroj[2] != regBroj[n-3] || regBroj[3] != regBroj[n-4])
            return false;

        for (int i = 4; i < n-4; i++) {
            if (islower(regBroj[i]))
                return false;
        }

        return true;
    }

};

int main() {

    Dvotockas dValidan("m1", "m2", "dffhadsijfhiasjd", 600);
    Dvotockas dNevalidan("m2", "m2", "aisjd", 1600);

    Cetvorotockas cValidan("m3", "m3", "asdfAISDJIASJDIASJD", 2000);
    Cetvorotockas cNevalidan("m3", "m3", "aisjdiiaw", 2000);

    vector <Vozilo*> vozila;

    vozila.push_back(&dValidan);
    vozila.push_back(&dNevalidan);
    vozila.push_back(&cValidan);
    vozila.push_back(&cNevalidan);

    Vozilo* najjaci = nullptr;

    //provera - pronaci vozilo sa najvecom snagom motora
    for (Vozilo* v : vozila) {
        if (v -> proveriBrojReg()) {
            if (najjaci == nullptr || *v > *najjaci)
                najjaci = v;
        }
    }

    if (najjaci == nullptr)
        cout << "Sva vozila imaju nevalidan reg broj" << endl;
    else
        cout << "Vozilo sa najjacim motorom i validnim reg brojem je " << *najjaci << endl;

}