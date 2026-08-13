//
// Created by neven on 13-Aug-26.
//

#include "Main.h"

#include <iostream>
#include <ostream>

using namespace std;

class A
{
private:
    int a;
public:
    void setA(int a){this->a = a;};
    void getA(){cout << "Vrednost za a: " << a << endl;};
};

class B
{
private:
    int b;
public:
    void setB(int b){this->b = b;};
    void getB(){cout << "Vrednost za b: " << b << endl;};
};

class C
{
private:
    int c;
public:
    void setC(int c){this->c = c;};
    void getC(){cout << "Vrednost za c: " << c << endl;};
};

class NasaKlasa1 : public A, public B, public C
{
public:
    void stampajVrednosti()
    {
        getA();
        getB();
        getC();
    }
};

class NasaKlasa2 : public A, public C
{
public:
    void stampajVrednosti()
    {
        getA();
        getC();
    }
};

class Osoba{

public:

    Osoba(int x){
    cout << "Klasa Osoba je pozvana" << endl;
    }

    Osoba(){
        cout << "Klasa Osoba je pozvana" << endl;
    }
};


class Nastavnik : public Osoba{

public:

    Nastavnik(int x) : Osoba(x)
    {
        cout << "Klasa Nastavnik je pozvana" << endl;
    }

};

class Student : public Osoba{

public:

    Student(int x) : Osoba(x){
        cout << "Klasa Student je pozvana" << endl;
    }
};

class Asistent : public Nastavnik, public Student{

public:

    Asistent(int x) : Nastavnik(x), Student(x){
        cout << "Klasa Asistent je pozvana" << endl;
    }
};

class Auto
{
public:
    static int broj;
    Auto(){broj+=1;}
};

int Auto :: broj = 0;

void testFunkcija(int* p);
void swapPokazivac(int* x, int* y);
void swapReferenca(int& x, int& y);

int main(){

    //Assistent(5);
    Auto a1;
    cout << "Broj automobile je: " << a1.broj << endl;

    Auto a2;
    cout << "Broj automobile je: " << a2.broj << endl;

    Auto a3;
    cout << "Broj automobile je: " << a3.broj << endl;

    NasaKlasa1 ns1;

    ns1.setA(5);
    ns1.setB(10);
    ns1.setC(15);
    ns1.stampajVrednosti();

    NasaKlasa2 ns2;

    ns2.setA(100);
    ns2.setC(200);
    ns2.stampajVrednosti();
    //
    // Osoba(int x){
    //     cout << "Klasa Osoba je pozvana" << endl;
    // }
    // Osoba(){
    //     cout << "Klasa Osoba je pozvana" << endl;
    // }
    //
    // int i = 0
    //
    // testFunkcija(p);
    // cout << i << endl;

    int a = 10;
    int b = 15;

    cout << "Primer swap-a preko pokazivaca: " << endl;

    cout << "Vrednost za a: " << a << endl;
    cout << "Vrednost za b: " << b << endl;

    cout << "\nSWAP!" << endl;
    swapPokazivac(&a, &b);

    cout << "Vrednost za a: " << a << endl;
    cout << "Vrednost za b: " << b << endl;

    cout << "Primer swap-a preko referenci: " << endl;

    cout << "Vrednost za a: " << a << endl;
    cout << "Vrednost za b: " << b << endl;

    cout << "\nSWAP!" << endl;
    swapReferenca(a, b);

    cout << "Vrednost za a: " << a << endl;
    cout << "Vrednost za b: " << b << endl;

    return 0;
}

void testFunkcija(int* p)
{
    *p = 100;
}

void swapPokazivac(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapReferenca(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
