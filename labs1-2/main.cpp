//
// Created by dimit on 4.7.2026..
//

#include "main.h"

#include <bitset>
#include <iomanip>
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

    char value = 65;
    std::cout << "value " << value << "\n";

    auto var1{ 12 };
    auto var2{ 13.0 };
    auto var3{ 'e' };
    auto var4{ 14.0f };
    auto var5{ 15.0l };
    auto var6{ 123u }; //unsigned
    auto var7{ 123ul }; //unsigned long
    auto var8{ 123ll }; //long long


    std::cout << "var1 zauzima: " << sizeof(var1) << std::endl;
    std::cout << "var2 zauzima: " << sizeof(var2) << std::endl;
    std::cout << "var3 zauzima: " << sizeof(var3) << std::endl;
    std::cout << "var4 zauzima: " << sizeof(var4) << std::endl;
    std::cout << "var5 zauzima: " << sizeof(var5) << std::endl;
    std::cout << "var6 zauzima: " << sizeof(var6) << std::endl;
    std::cout << "var7 zauzima: " << sizeof(var7) << std::endl;
    std::cout << "var8 zauzima: " << sizeof(var8) << std::endl;

    int x;

    std::cout << "x: " << x << std::endl;
    std::cin >> x;
    std::cout << "Vrednost za X je: " << x << std::endl;

    for (int i = 0; i < 10; i++){
        std::cout << i << std::endl;
    }

    //stanje racuna
    //podizanje gotovine
    //uplata sredstava

    std::cout << "Program za podizanje novca" << std::endl;

    int stanjeRacuna = 100000;
    bool izlaz = false;
    int opcija;
    int iznos;

    while (izlaz == false)
    {
        std::cout << "Molimo odaberite opciju: \n1.Podizanje gotovine\n2.Stanje racuna\n3.Uplata na racun\n4.Izlaz" << std::endl;
        std::cin >> opcija;

        switch (opcija)
        {
        case 1:{
                std::cout << "Unesite iznos koji zelite da podignete: " << std::endl;
                std::cin >> iznos;
                stanjeRacuna  -= iznos;
                break;
        }
        case 2:{
                std::cout << "Stanje na racunu: " << stanjeRacuna << std::endl;
                break;
        }
        case 3:{
                std::cout << "Unesite iznos koji zelite da uplatite: " << std::endl;
                std::cin >> iznos;
                stanjeRacuna += iznos;
                break;
        }
        case 4:{
                izlaz = true;
                break;
            }

        default:
            {
                break;
            }

        }
    }

    int scores [10];

    for (std::size_t i {0}; i < 10; ++i) {
        std::cout << "scores [" << i << "] : " << scores[i] << "\n";
    }

    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    std::cout << "\n";

    for (std::size_t i {0}; i < 10; ++i) {
        std::cout << "scores [" << i << "] : " << scores[i] << "\n";
    }

    double clanovi [5] {12,7, 11.3, 14.5};

    for (std::size_t i {0}; i < 5; ++i) {
        std::cout << "clanovi [" << i << "] : " << clanovi[i] << "\n";
    }

    for (auto i : clanovi) {
        std::cout  << i << "\n";
    }

    srand(time(0));
    int random_num = rand();

    std::cout << "random_num: " << random_num << "\n";

    int random_num2=rand();

    for (size_t i {0}; i < 20; ++i) {
        std::cout << random_num2 << "\n";
    }

    int red, kolona, a[10][10], b[10][10], sum[10][10];

    std::cout << "Unesite broj redova i kolona" << std::endl;
    std::cin >> red >> kolona;

    std::cout << "Unesite elemente matrice 1" << std::endl;

    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            std::cout << "Unesite elemente matrice " << i << " " << j << std::endl;
            std::cin >> a[i][j];
        }
    }

    std::cout << "Unesite elemente matrice 2" << std::endl;

    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            std::cout << "Unesite elemente matrice " << i << " " << j << std::endl;
            std::cin >> b[i][j];
        }
    }

    std::cout << "Sabiranje Matrice A i B..." << std::endl;

    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            std::cout << "Sabiranje elemenata matrice " << i << " " << j << std::endl;
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    std::cout << "Prikaz sume: " << std::endl;

    for (int i = 0; i < red; ++i) {
        for (int j = 0; j < kolona; ++j) {
            std::cout << "Element: " << i << " " << j << std::endl;
            std::cout << sum[i][j];
        }
    }

    unsigned short int value01{ 0xff0u };

    std::cout << "Size of short int " << sizeof(value01) << std::endl;
    std::cout << "Value: " << std::bitset<16>(value01) << ", dec: " << value01 << std::endl;

    //shift left by one bit
    value01 = static_cast <unsigned short int>(value01 << 1);
    std::cout << "Value: " << std::bitset<16>(value01) << ", dec: " << value01 << std::endl;


    int COLUMN_WIDTH{20};
    unsigned char value02{0x3};//0000 0011
    unsigned char value03{0x5};//0000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "value02: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value02) << ", dec: " << value02 << std::endl;

    // AND
    std::cout << "\n";
    std::cout << std::setw(COLUMN_WIDTH) << "value1 & value2 : " << std::setw(COLUMN_WIDTH) << std::bitset<8> (value01 & value02) << "\n";
    std::cout << "\n";

    // OR
    std::cout << "\n";
    std::cout << std::setw(COLUMN_WIDTH) << "value1 | value2 : " << std::setw(COLUMN_WIDTH) << std::bitset<8> (value01 | value02) << "\n";
    std::cout << "\n";

    // NOT
    std::cout << "\n";
    std::cout << std::setw(COLUMN_WIDTH) << "~value1 : " << std::setw(COLUMN_WIDTH) << std::bitset<8> (~value01) << "\n";
    std::cout << "\n";

    // XOR
    std::cout << "\n";
    std::cout << std::setw(COLUMN_WIDTH) << "value1 XOR value2 : " << std::setw(COLUMN_WIDTH) << std::bitset<8> (value01^value02) << "\n";
    std::cout << "\n";

    // TYPEDEF

    typedef int eur;
    typedef int usd;

    eur euroKupovni = 117;
    eur euroProdajni = 118;

    usd usdKupovni = 100;
    usd usdProdajni = 101;

    int option;
    int secondOption;
    int amount;

    do {

        std::cout << "*** GLAVNI MENI ***" << std::endl;
        std::cout << "1. Kupovina" << std::endl;
        std::cout << "2. Prodaja" << std::endl;
        std::cout << "3. Kraj Rada" << std::endl;

        std::cin >> option;
        system("cls");

        switch (option) {
            case 1: {

                std::cout << "Odaberite valutu za KUPOVINU: " << std::endl;
                std::cout << "1. EUR" << std::endl;
                std::cout << "2. USD" << std::endl;
                std::cin >> secondOption;

                std::cout << "Unesite iznos za kupovinu: ";
                std::cin >> amount;

                switch (secondOption) {
                    case 1: {
                        //case EUR
                        std::cout << "Cena kupovine "<< amount << " EUR iznosi: " << amount*euroKupovni << " RSD." << std::endl;
                        break;
                    }
                    case 2: {
                        //case USD
                        std::cout << "Cena kupovine "<< amount << " USD iznosi: " << amount*usdKupovni << " RSD." << std::endl;
                        break;
                    }
                    default: {
                        break;
                    }
                }
                break;
            }
            case 2: {
                std::cout << "Odaberite valutu za PRODAJU: " << std::endl;
                std::cout << "1. EUR" << std::endl;
                std::cout << "2. USD" << std::endl;
                std::cin >> secondOption;

                std::cout << "Unesite iznos za kupovinu: ";
                std::cin >> amount;

                switch (secondOption) {
                    case 1: {
                        //case EUR
                        std::cout << "Cena prodaje "<< amount << " EUR iznosi: " << amount*euroProdajni << " RSD." << std::endl;
                        break;
                    }
                    case 2: {
                        //case USD
                        std::cout << "Cena prodaje "<< amount << " USD iznosi: " << amount*euroProdajni << " RSD." << std::endl;
                        break;
                    }
                    default: {
                        break;
                    }
                }
                break;
            }
            case 3: {
                option=0;
                std::cout << "Hvala na poseti. Prijatan dan!" << std::endl;
                break;
            }
            default: {
                break;
            }
        }

    } while (option != 0);

    return 0;
}