#include "Tacka.h"
#include <iostream>
#include <math.h>

using namespace std;
//fokus na koriscenwwje STL-a + Pointers + References

Tacka::Tacka(flaot x, float y) {
    this -> x = x;
    this -> y = y;
}

float Tacka::distance() {
    return sqrt(x * x + y * y);
}

void Tacka::print() {
    cout << " [ " << x << "][ " << y << " ]" << endl;
}

