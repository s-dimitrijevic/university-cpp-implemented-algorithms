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

    }

};

int main() {


    //getVelicina
    //stampajStrukturu
    //File
    //Exceptions
    //19:08 (vezbe10cas3)
}
