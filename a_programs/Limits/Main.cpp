//
// Created by dimit on 7.7.2026..
//

#include "Main.h"
#include <climits>
#include <cfloat>
#include <iostream>

int main()
{
    std::cout << "Najmanji INT: " << INT_MIN << std::endl;
    std::cout << "Najveci INT: "  << INT_MAX << std::endl;
    std::cout << "Namanji DOUBLE: " << DBL_MIN << std::endl;
    std::cout << "Najveci FLOAT: " << FLT_MAX << std::endl;

    std::cout << "Tip double zauzima: " << sizeof(double) << " bajtova" << std::endl;
    std::cout << "Tip long zauzima: " << sizeof(long) << " bajtova" << std::endl;

}
