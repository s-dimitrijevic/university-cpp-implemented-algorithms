//
// Created by d-sava on 9. 8. 2026..
//

#include "Main.h"
#include <iostream>

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
    const size_t size {10};
    // double* p_salaries{new double[size]};//niz se alocira ali na garbage vrednosti

    //initializing 0-filled array & half-filled array
    int* p_students{new (std::nothrow) int[size] {} };
    int* p_scores{new (std::nothrow) int[size] {1,2,3,4} };

    if (p_scores){
        std::cout << "Size of scores: " << sizeof(p_scores) << std::endl;
    }

    for (size_t i = 0; i < size; ++i){
        std::cout << "Vrednost: " << p_scores[i] << " : " << *(p_scores+i) << std::endl;
    }

    //deleting items
    delete[] p_scores;
    delete[] p_students;
    return 0;
}
