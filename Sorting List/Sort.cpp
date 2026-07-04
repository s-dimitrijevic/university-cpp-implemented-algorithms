//
// Created by dimit on 4.7.2026..
//

#include "Sort.h"
#include <iostream>
#include <vector>
#include <algorithm>


//Kreiranje, sortiranje i prikaz liste celih brojeva
int main()
{
    std::vector<int> v = {3,3,2,1,6,-2};
    std::sort(v.begin(), v.end());

    for (auto e : v)
    {
        std::cout << e << std::endl;
    }
}
