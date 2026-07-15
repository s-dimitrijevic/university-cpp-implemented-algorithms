//
// Created by d-sava on 15. 7. 2026..
//

#include "Main.h"

#include <bitset>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
    // ✓ OK — old-style, silent truncation to 2
    int broj(2.98);
    std::cout << broj << std::endl;

    // Declaration and initialization
    int x = 5; //Copy initialization
    int y(5); //Functional initialization
    int z{5}; //Uniform initialization (Brace)
    int xyz{};//Value initialization, value is set to 0

    std::cout << xyz << std::endl;

    float temperature{98.6f};//correct, same type
    //int temp{98.6};//error

    //The rule: { } initialization is stricter. It says: "I know exactly what type this should be." The compiler enforces it. Functional ( ) says: "Close enough."

    unsigned char grade{};
    std::cout << "Enter a grade: " << std::endl;
    std::cin >> grade;

    int valor{}; //set to default "0".
    std::vector<int> numbers{1,2,3};

    char name[15];
    std::cout << "Enter a name: " << std::endl;
    std::cin.getline(name, 15); // ✓ SAFE: reads up to 14 chars + null terminator, Reads entire line including spaces and Stops at newline or size limit

    int COLUMN_WIDTH = 20;
    unsigned char value1{0x3}; // 0000 0011
    unsigned char value2{0x5}; // 0000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "Value01 : " << std::setw(COLUMN_WIDTH) << std::bitset<16>(value1) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "Value02 : " << std::setw(COLUMN_WIDTH) << std::bitset<16>(value2) << std::endl;

    double pi{3.14159265358979323846}; //defaults to 6 numbers
    std::cout << "Value of PI: " << pi << std::endl;
    std::cout << std::setprecision(16) << std::fixed;
    std::cout << "Value of PI: " << pi << std::endl;

    // PART A: Uninitialized array (will have garbage)
    int garbageArray[5];

    std::cout << "Uninitialized array (garbage values): " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "garbage[" << i << "] : " << garbageArray[i] << std::endl;
    }

    // PART B: Initialized array (all zeros)
    int cleanArray[5]{};

    std::cout << "\nINITIALIZED ARRAY (all zeros):\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "clean[" << i << "] : " << cleanArray[i] << std::endl;
    }

    // PART C: Partially initialized array
    int partialArray[5]{5,10,20};

    std::cout << "\nPARTIALLY INITIALIZED ARRAY:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "partial[" << i << "] : " << partialArray[i] << std::endl;
    }

    // PART A: Initialization

    // Task 1: Declare an int with uniform initialization, default value 0
    int variable_a{};

    // Task 2: Declare a float with uniform initialization to 3.14
    float variable_pi{3.14};

    // Task 3: Try to declare an int with uniform initialization from 2.9
    //int someintvalue{2.9};//will fail, can not turn it into INT value

    // PART B: Safe String Input

    // Task 4: Use cin.getline() to safely read the entire line
    const int MAX_NAME = 50;
    char fullName[MAX_NAME];
    std::cout << "Enter your full name (with spaces): " << std::endl;
    std::cin.getline(fullName, MAX_NAME);

    // Task 5: Print the name with 30-char width formatting (use setw)
    std::cout << "Your name is: " << std::setw(30) << fullName << "\n";

    // Financial data for 3 accounts

    std::string accounts[] = {"Savings", "Checking", "Brokerage"};
    double balances[] = {15000.567, 3245.892, 98765.1234};

    std::cout << "BANK ACCOUNT SUMMARY\n";
    std::cout << std::string(60, '=') << "\n";  // Print line of '=' chars

    // Header row (use setw to align)
    // Task 1: Print "Account" and "Balance" with 25-char width each

    int COLUMN_WIDTH_X = 25;

    for (int i = 0; i < size(accounts); ++i) {
        std::cout << "Account: [" <<accounts[i] << "]" << std::setw(COLUMN_WIDTH_X) << "Balance: [" << balances[i] << "]" << std::endl;
        std::cout << "\n";
    }

    // BITWISE OPERATIONS

    unsigned char a{0xA}; //1010 --> bitset<8> --> 0000 1010
    unsigned char b{0x5}; //0101 --> bitset<8> --> 0000 0101

    unsigned char and_operation = a&b;
    unsigned char or_operation = a|b;
    unsigned char xor_operation = a^b;
    unsigned char not_operation = ~a;
    unsigned char shift_left_operation = a << 1;
    unsigned char shift_right_operation = a >> 1;

    std::cout << "a & b = " << std::bitset<8>(and_operation) << " (decimal: " << static_cast<int>(and_operation) << ")" << std::endl;
    std::cout << "a | b = " << std::bitset<8>(or_operation) << " (decimal: " << static_cast<int>(or_operation) << ")" << std::endl;
    std::cout << "a ^ b = " << std::bitset<8>(xor_operation) << " (decimal: " << static_cast<int>(xor_operation) << ")" << std::endl;
    std::cout << "~a = " << std::bitset<8>(not_operation) << " (decimal: " << static_cast<int>(not_operation) << ")" << std::endl;
    std::cout << "a << 1 = " << std::bitset<8>(shift_left_operation) << " (decimal: " << static_cast<int>(shift_left_operation) << ")" << std::endl;
    std::cout << "a >> 1 = " << std::bitset<8>(shift_right_operation) << " (decimal: " << static_cast<int>(shift_right_operation) << ")" << std::endl;

    return 0;
}
