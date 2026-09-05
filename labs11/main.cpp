//
// Created by d-sava on 6. 9. 2026..
//

#include "main.h"
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Zaposleni {

protected:
    string ime, prezime, id;

public:
    Zaposleni(
        string ime="Pera",
        string prezime="Peric",
        string id="0000000"
    ) ime(move(ime)), prezime(move(prezime)), id(id.size() == 8) ? id : "0000000") {};

    
};

int main() {

}
