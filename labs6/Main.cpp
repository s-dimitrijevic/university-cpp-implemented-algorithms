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

int main(){

    NasaKlasa1 ns1;

    ns1.setA(5);
    ns1.setB(10);
    ns1.setC(15);
    ns1.stampajVrednosti();

    NasaKlasa2 ns2;

    ns2.setA(100);
    ns2.setC(200);
    ns2.stampajVrednosti();
    
    return 0;
}
