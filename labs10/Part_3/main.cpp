//
// Created by neven on 05-Sep-26.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "main.h"

using namespace std;

class SkladisnaJedinica {

private:
    string naziv;
protected:
    vector<SkladisnaJedinica> sadrzaj;
public:
    SkladisnaJedinica(string naziv) : naziv(naziv) {}

    string getNaziv(){ return naziv;}

    virtual long getVelicina() const = 0;
    virtual void stampajStrukturu(int dubina = 0) const = 0;

    virtual SkladisnaJedinica& operator += (SkladisnaJedinica* jedinica) {
        sadrzaj.push_back(jedinica);
        return *this;
    }

    virtual SkladisnaJedinica& operator [](size_t index) const {

        if (index >= sadrzaj.size())
            return nullptr;

        return sadrzaj[index];
    }

    virtual SkladisnaJedinica& operator ()(const string& naziv) {

        for (auto s : sadrzaj) {
            if (s->getNaziv() == naziv)
                return s;
        }

        return nullptr;
    }

    friend ostream& operator << (ostream& out, const SkladisnaJedinica& j) {
        j.stampajStrukturu();
        return out;
    }

    virtual ~SkladisnaJedinica() {

        for (auto s : sadrzaj)
            delete s;
    }
};

class Fajl : public SkladisnaJedinica {

private:
    long velicina;

public:
    Fajl(string naziv, long velicina) : SkladisnaJedinica(naziv), velicina(velicina)

    long getVelicina() const override{ return velicina; }
    void stampajStrukturu(int dubina = 0) const override {
        cout << string(dubina * 2, ' ') << "[F]" << getNaziv() << " (" << getVelicina() << "byts)" << endl;
    }


};

class Direktorijum : public SkladisnaJedinica {

public:
    using SkladisnaJedinica::SkladisnaJedinica;


    long getVelicina() const override{ return }
};

int main() {

    //getVelicina
    //stampajStrukturu
    //File
    //Exceptions
    //19:08 (vezbe10cas3)


}
