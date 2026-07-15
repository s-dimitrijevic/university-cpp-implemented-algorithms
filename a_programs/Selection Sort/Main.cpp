//
// Created by dimit on 8.7.2026..
//

#include "Main.h"
#include <iostream>

int main()
{
    int niz [] =  {33,100,4,55,66,88,7,800,11,0};
    int brojElemenata = 10;

    for (int i= 0; i < brojElemenata-1 ; i++){

        int minIndeks = i;
        int currentMin = niz[i];

        for (int j = i+1; j < brojElemenata; j++){
            if (currentMin > niz[j]){
                minIndeks = j;
                currentMin = niz[j];
            }
        }

        if (minIndeks != i){
            int temp = niz[i];
            niz[i] = niz[minIndeks];
            niz[minIndeks] = temp;
        }
    }

    std::cout << "Sortiran niz: " << std::endl;
    for (auto i : niz){
        std::cout << "Element: " << i << std::endl;
    }
}