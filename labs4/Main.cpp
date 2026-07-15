//
// Created by d-sava on 9. 8. 2026..
//

#include "Main.h"
#include <iostream>
using namespace std;

int main() {

    int x = 200;//variable x of type int
    int* px;//new pointer X (px)
    px = &x;//memory location of x

    int y = 200;
    int z = 300;

    cout << "Memorijska lokacija promenljive x je " << &x << endl;
    cout << "Memorijska lokacija promenljive y je " << &y << endl;
    cout << "Memorijska lokacija promenljive z je " << &z << endl;

    //Deklaracija  i inicijalizacija
    int * pvar, var;
    var = 10;
    pvar = &var;

    cout << "Vrednost promenljive var: " << var << endl;
    cout << "Adresa promenljive var: " << pvar << endl;
    cout << "Vrednost promenljive var(pokazivac na pokazivac)" << *pvar << endl;

    *pvar = 15;
    cout << "Vrednost promenljive var: " << var << endl;
    cout << "Adresa promenljive var: " << pvar << endl;

    //Dinamicka alokacija memorije
    int* ptr = new int;//alociramo memoriju za jedan integer
    *ptr = 20;//dodeljujemo vrednost dinamicki alociranoj memoriji
    /*
     *
     * Ovde nesto radimo..
     *
     */
    delete ptr;//dealociranje memorije nakon sto smo zavrsili sa upotrebom

    //Pokazivac na pokazivac
    int abc = 10;
    int* ptr1 = &abc;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;

    cout << "Memory location of PTR3 holds value: " << ptr3 << " (address of PTR2)" << endl;
    cout << "Memory location of PTR2 holds value: " << ptr2 << " (address of PTR1)" << endl;
    cout << "Memory location of PTR1 holds value: " << ptr1 << " (address of ABC)" << endl;
    cout << "Memory location of ABC holds value: " << abc << " (real value of ABC)" << endl;

    //Pokazivaci i nizovi
    int arr[5] = {1,2,3,4,5};
    int* ptrArr = arr; //Pokazivac na prvi element niza
    ptrArr++;

    return 0;
}
