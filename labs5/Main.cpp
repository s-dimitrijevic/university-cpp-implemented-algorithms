//
// Created by d-sava on 9. 8. 2026..
//

#include "Main.h"
#include <iostream>
#include <span>

int main()
{
    // int* p_number{};//inicijalizuje se nullptr
    // double* p_fractional_number{};
    //
    // int* p_number{nullptr};
    // double* p_fractional_number{nullptr};
    //
    // std::cout << "Sizeof(int*): " << sizeof(int*) << std::endl;
    // std::cout << "Sizeof(double*): " << sizeof(double*) << std::endl;
    // std::cout << "Sizeof(p_number): " << sizeof(p_number) << std::endl;
    // std::cout << "Sizeof(p_fractional_number): " << sizeof(p_fractional_number) << std::endl;
    //
    // int int_var{43};
    // int* p_int{&int_var};
    //
    // int int_var1{65};
    // p_int = &int_var1;
    //
    // /*Zabranjeno
    // int* p_int1{nullptr};
    // double double_var{33};
    // p_int1 = &double_var;
    // */
    //
    // const char* message{"hello world!"};
    // std::cout << "message " << message << std::endl;
    // std::cout << "*message " << *message << std::endl;
    //
    // int number{5};

    // int number {632};
    // const  int* p_number {&number};
    // std::cout << *p_number << std::endl;
    // std::cout << number << std::endl;
    //
    // //*p_number = 666; - ERROR
    // int number4 = {999};
    // p_number = &number4;
    //
    // std::cout << number4 << std::endl;
    // std::cout << *p_number << std::endl;
    //
    // const char* const students[]
    // {
    //     "Loki",
    //     "Thor",
    //     "Iron Man",
    //     "Hulk"
    // };
    //
    // std::cout << "Stampamo sve studente." << std::endl;
    // for (char const* student : students)
    // {
    //     std::cout << student << std::endl;
    // }
    //
    // const char* new_student{"Thanos"};
    //
    // //students[0] = new_student; - ERROR
    //
    // int scores[10] = {13, 12, 123, 123, 12, 10, 19, 59};
    // int (*p_scores)[10] = &scores;
    //
    // std::cout << "Scores: " << scores << std::endl;
    //
    // std::cout << "*P_scores: " << *p_scores << std::endl;
    // std::cout << "P_scores: " << p_scores << std::endl;
    //
    // std::cout << "&[0]scores: " << &scores[0] << std::endl;
    //
    // const size_t size {10};
    // // double* p_salaries{new double[size]};//niz se alocira ali na garbage vrednosti
    //
    // //initializing 0-filled array & half-filled array
    // int* p_students{new (std::nothrow) int[size] {} };
    // int* p_scores{new (std::nothrow) int[size] {1,2,3,4} };
    //
    // if (p_scores){
    //     std::cout << "Size of scores: " << sizeof(p_scores) << std::endl;
    // }
    //
    // for (size_t i = 0; i < size; ++i){
    //     std::cout << "Vrednost: " << p_scores[i] << " : " << *(p_scores+i) << std::endl;
    // }
    //
    // //deleting items
    // delete[] p_scores;
    // delete[] p_students;
    //
    // int scores[10] {1,2,3,4,5,6,7,8,9,10};
    // for (auto i : scores)
    // {
    //     std::cout << i << std::endl;
    // }
    //
    // int* p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10};//heap memorija
    // std::span<int, 10> scores_view(p_scores1, 10);
    //
    // for (int score : scores_view)
    // {
    //     std::cout << score << std::endl;
    // }

    std::cout << "Unesite zeljenu duzinu nizu: " << std::endl;

    int duzinaNiza;
    std::cin >> duzinaNiza;
    int noviNiz[duzinaNiza];

    for (int i = 0; i < duzinaNiza; i++){

        std::cout << "\nUnesite " << i + 1 << " clan niza" <<": " << std::endl;

        int clanNiza;
        std::cin >> clanNiza;

        do{
            if (clanNiza % 3 == 0)
                break;

            std::cout << "Broj mora biti deljiv sa 3!";
            std::cout << "\nUnesite " << i + 1 << "clan niza ponovo: " << std::endl;
            std::cin >> clanNiza;

        } while (clanNiza % 3 != 0);

        std::cout << "Broj " << clanNiza << " dodat u niz!" << std::endl;
        noviNiz[i] = clanNiza;
    }

    std::cout << "Niz: " << std::endl;
    int counter3s = 0;
    int counter4s = 0;

    //Treba mi ispis svakog treceg + Adresa svakog cetvrtog
    for (int clan : noviNiz){

        if (counter3s == 3){
            std::cout << "Clan (svaki treci) : " << clan << std::endl;
            counter3s = 0;
        }

        if (counter4s == 4){
            std::cout << "Clan (svaki cevrti) - adresa : " << &clan << std::endl;
            counter4s = 0;
        }

        counter3s++;
        counter4s++;
    }


    return 0;
}
