//
// Created by d-sava on 2. 8. 2026..
//
#include "Tacka.h"
#include "Main.h"
#include <iostream>
using namespace std;

int my_max(int a, int b);//prototip funkcije
int inc_multi(int,int);
int GCD(int, int);
void printArray(int array[], int start, int length);

int main() {

    int a=48;
    int b=18;

    int result = my_max(a, b);
    cout << "Rezultat MAX(a,b): " << result << endl;

    int result02 = GCD(a, b);
    cout << "Rezultat GCD(a,b): " << result02 << endl;

    int array[] = {2, 3, 5, 7};
    printArray(array, 0, 4);

    for (size_t i{0}, x{5}, y{22}; y > 15; ++i, x += 5, y -= 1){
        cout << "X = " << x << " Y = " << y << " I = " << i << endl;
    }

    Tacka t1(2.4, 5.2);
    cout << "Distance is: " << t1.distance() << endl;

    //
    //

    return 0;
}

int my_max(int a, int b) {//definicija funkcije
    return (a > b) ? a : b;
}

int inc_multi(int a, int b) {
    return ++a * ++b;
}

int GCD(int a, int b) {

    if (b==0)
        return a;

    int r = a%b;

    while (r != 0) {
        a = b;
        b = r;
        r = a%b;
    }

    return a;
}

void printArray(int array[], int start, int length) {
    for (int i = start; i < length; i++) {
        cout << "Element " << i << " : " << array[i] << endl;
    }
}