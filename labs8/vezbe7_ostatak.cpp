//
// Created by neven on 22-Aug-26.
//

#include "vezbe7_ostatak.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <list>
#include <functional>

using namespace std;
const double adjustment{0.724};

//NO ADJUST NAMESPACE
namespace No_Adjust
{
    double add(double x, double y){
        return x + y;
    }

    double multi(double x, double y); // deklaracija
    double div(double x, double y);
}

//ADJUST NAMESPACE
namespace Adjust
{
    double add(double x, double y){
        return x + y - adjustment;
    }

    double multi(double x, double y); // deklaracija
    double div(double x, double y);
}


int main()
{
    //Koriscene funkcije: find, count, erase

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Duzina niza je " << n << endl;
    vector<int> nekiVektor(a, a + n);

    for (auto nv : nekiVektor)
        cout << nv << " ";

    cout << "\n";

    nekiVektor.erase(find(nekiVektor.begin(), nekiVektor.end(), 15));
    cout << "Nas vektor nakon erase " << "\n" << endl;

    for (auto nv : nekiVektor)
        cout << nv << " ";

    cout << "\n";

    cout << "Broj elemenata koji imaju vrednost 15 je: "
        << count(nekiVektor.begin(), nekiVektor.end(), 15) << endl;

    find(nekiVektor.begin(), nekiVektor.end(), 16) != nekiVektor.end()
        ? cout << "Element sa tom vrednoscu postoji u vektor "
        : cout << "Element sa tom vrednoscu ne postoji u vektoru " << "\n";

    vector<int> nekiNoviVektor{2, 12, 3, 13, 4, 14, 5, 15};
    sort(nekiNoviVektor.begin(), nekiNoviVektor.end());

    for (auto nvv : nekiNoviVektor)
    {
        cout << nvv << " ";
    }

    vector<int> nekiNoviVektor2{2, 12, 3, 13, 4, 14, 5, 16, 1243123, 124, 12, 3, 123};

    sort(nekiNoviVektor2.begin(), nekiNoviVektor2.end(), greater<>());
    for (auto nnv2 : nekiNoviVektor2)
        cout << nnv2 << " ";

    //all_of - svi elementi niza
    int arr[5] = {1, 2, 3, 4, 5};
    all_of(arr, arr + 5, [](int x) { return x > 0; })
        ? cout << "Svi elementi su veci od 0"
        : cout << "Barem jedan element niza nije veci od 0"
        << "\n" << endl;

    //any_of - bilo koji element niza
    int arr2[5] = {-1, 2, 3, -4, -5};
    any_of(arr, arr + 5, [](int x) { return x > 0; })
        ? cout << "Barem jedan element niza je veci od nule"
        : cout << "Niti jedan element niza nije veci od nule"
        << "\n" << endl;

    //none_of - nijedan od elemenata niza
    int arr3[5] = {1, 2, 3, 4, 5};
    none_of(arr, arr + 5, [](int x) { return x < 0; })
        ? cout << "Niti jedan element naseg niza nije manji od 0"
        : cout << "Bar jedan element naseg niza je manje od 0"
        << "\n" << endl;

    

    return 0;
}
