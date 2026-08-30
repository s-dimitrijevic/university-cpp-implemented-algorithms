//
// Created by d-sava on 31. 8. 2026..
//

#include "main.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <iterator>

using namespace std;

int main() {

    vector <double> celsius = {0,10,20,30};
    vector <double> fahrenheit(celsius.size());

    transform(celsius.begin(), celsius.end(), fahrenheit.begin(), [](double c) {
        return c * 1.8 + 32;
    });

    cout << "Temperatura u F: " << endl;
    for (double f : fahrenheit)
        cout << f << endl;

    vector <int> examPoints = {10,20,25,18};

    int total = accumulate(examPoints.begin(), examPoints.end(), 0);
    cout << "Ukupan broj poena je: " << total << endl;

    vector <int> grades = {4,5,78,8,9,5,10};

    //lambda funkcija 1
    grades.erase(remove_if(grades.begin(), grades.end(), [](int grade){return grade < 6;}));

    for (int g : grades) {
        cout << g << endl;
    }

    //lambda funkcija 2
    auto it = find_if(grades.begin(), grades.end(), [](int g){return g >= 10;});
    if (it != grades.end())
        cout << "Prva ocena <= 9" << *it << endl;

    int polozeni = count_if (grades.begin(), grades.end(), [](int g) {
        return g>=6;
    });

    cout << "Polozeni ispiti: " << polozeni << endl;
    //27:21

    return 0;
}