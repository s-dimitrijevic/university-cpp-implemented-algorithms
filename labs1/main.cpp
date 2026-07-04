//
// Created by dimit on 4.7.2026..
//

#include "main.h"
#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;
    std::cout << "OOP2" << std::endl;

    int i1, i2;
    float f1, f2;
    double d1, d2;

    int broj1 = 15;//decimalni broj
    int broj2 = 017;//oktalni
    int broj3 = 0x0F;//heksadecimalni
    int broj4 = 0b00001111;//binarni

    unsigned int broj5{15};
    int broj6{};
    //int broj7{ 2.9 };
    int broj8(2.9);

    std::cout << "broj1 :" << broj1 << "\n";
    std::cout << "broj2 :" << broj2 << "\n";
    std::cout << "broj3 :" << broj3 << std::endl;
    std::cout << "broj4 :" << broj4 << std::endl;
    std::cout << "broj5 :" << broj5 << std::endl;
    std::cout << "broj6 :" << broj6 << std::endl;
    std::cout << "broj8 :" << broj8 << std::endl;

    signed int vrednost1{ 10 };
    signed int vrednost2{ -356 };

    std::cout << "sizeof(vrednost1): " << sizeof(vrednost1) << std::endl;
    std::cout << "sizeof(vrednost2): " << sizeof(vrednost2) << std::endl;

    float nekiTamoFloat{ 1.123234587423f};
    double nekiTamoDouble{ 1.123234587123423 };
    long double nekiTamoLongDouble{ 1.1232345874234567L };

    std::cout << "sizeof(nekiTamoFloat): " << sizeof(nekiTamoFloat) << std::endl;
    std::cout << "sizeof(nekiTamoDouble): " << sizeof(nekiTamoDouble) << std::endl;
    std::cout << "sizeof(nekiTamoLongDouble): " << sizeof(nekiTamoLongDouble) << std::endl;

    bool crveno_svetlo{ false };
    bool zeleno_svetlo{ true };

    if (crveno_svetlo == true){
        std::cout << "STOP!!!" << std::endl;
    }
    else{
        std::cout << "Mozes da prodjes" << std::endl;
    }

    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;
    std::cout << "Crveno svetlo: " << crveno_svetlo << std::endl;
    std::cout << "Zeleno svetlo: " << zeleno_svetlo << std::endl;

    return 0;
}