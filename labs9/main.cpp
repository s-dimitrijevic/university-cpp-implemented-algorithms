//
// Created by d-sava on 23. 8. 2026..
//

#include "main.h"
#include <iostream>
#include <vector>
#include <array>

using namespace std;

template <typename T> void print_collection(const T& collection) {

    auto it = collection.begin();
    cout << " [";

    while (it != collection.end()) {
        cout << " " << *it;
        ++it;
    }

    cout << "]" << endl;
}

int main() {

    vector<int> ints1{11,22,33,44};
    array<int,4> ints2{100,200,300,400};

    vector<int> ::iterator it_begin = ints1.begin();
    vector<int> ::iterator it_end = ints1.end();

    cout << boolalpha;
    cout << "prvi element <<" << *it_begin << endl;
    cout << "it == end_it" << (it_begin == it_end) << endl;

    ++it_begin;
    cout << "drugi element <<" << *it_begin << endl;
    cout << "it == end_it" << (it_begin == it_end) << endl;

    ++it_begin;
    cout << "treci element <<" << *it_begin << endl;
    cout << "it == end_it" << (it_begin == it_end) << endl;

    ++it_begin;
    cout << "cetvrti element <<" << *it_begin << endl;
    cout << "it == end_it" << (it_begin == it_end) << endl;

    return 0;
}