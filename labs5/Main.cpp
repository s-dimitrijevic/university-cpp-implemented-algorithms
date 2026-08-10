//
// Created by d-sava on 9. 8. 2026..
//

#include "Main.h"
#include <iostream>

int main() {

    // // int* p_number{};//inicijalizuje se nullptr
    // // double* p_fractional_number{};
    // //
    // // int* p_number{nullptr};
    // // double* p_fractional_number{nullptr};
    // //
    // // std::cout << "Sizeof(int*): " << sizeof(int*) << std::endl;
    // // std::cout << "Sizeof(double*): " << sizeof(double*) << std::endl;
    // // std::cout << "Sizeof(p_number): " << sizeof(p_number) << std::endl;
    // // std::cout << "Sizeof(p_fractional_number): " << sizeof(p_fractional_number) << std::endl;
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
    //
    // int *p_number1{ nullptr };
    // int number1{123};
    //
    // p_number1 = &number1;
    //
    // std::cout << "*number1 " << *p_number1 << std::endl;
    // std::cout << "number1 " << number1 << std::endl;
    //
    // *p_number1 = 423;
    //
    // std::cout << "p_number1 " << p_number1 << std::endl;
    // std::cout << "*p_number1 " << *p_number1 << std::endl;
    // std::cout << "number1 " << number1 << std::endl;


    int number3{632};
    const int* p_number3{&number3};
    std::cout << "*p_number3: " << *p_number3 << std::endl;
    std::cout << "Number3: " << number3 << std::endl;
    std::cout << "&p_number3: " << &p_number3 << std::endl;
    std::cout << "&number3: " << &number3 << std::endl;

    return 0;
}
