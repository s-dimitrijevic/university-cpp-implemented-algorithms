//
// Created by d-sava on 23. 8. 2026..
//

#include "main.h"
#include <iostream>
#include <vector>
#include <array>
#include <list>

using namespace std;

template <typename T> void print_collection(const T& collection) {

    auto it = collection.begin();
    cout << " [";

    while (it != collection.end()) {
        cout << " " << *it;
        ++it;
    }

    cout << "]" << endl;
}

template <typename T> void print_collection_adj(const vector<T>& collection, size_t begin_adj, size_t end_adj){

    auto start_point = collection.begin() + begin_adj;
    auto end_point = collection.begin() - end_adj;

    cout << " [";
    while (start_point != end_point){
        cout << " " << *start_point;
        ++start_point;
    }
    cout << "]" << endl;
}

int main() {

    // vector<int> ints1{11,22,33,44};
    // array<int,4> ints2{100,200,300,400};
    //
    // vector<int> ::iterator it_begin = ints1.begin();
    // vector<int> ::iterator it_end = ints1.end();
    //
    // cout << boolalpha;
    // cout << "prvi element <<" << *it_begin << endl;
    // cout << "it == end_it" << (it_begin == it_end) << endl;
    //
    // ++it_begin;
    // cout << "drugi element <<" << *it_begin << endl;
    // cout << "it == end_it" << (it_begin == it_end) << endl;
    //
    // ++it_begin;
    // cout << "treci element <<" << *it_begin << endl;
    // cout << "it == end_it" << (it_begin == it_end) << endl;
    //
    // ++it_begin;
    // cout << "cetvrti element <<" << *it_begin << endl;
    // cout << "it == end_it" << (it_begin == it_end) << endl;
    //
    // cout << "***********" << endl;
    // cout << "ints1: " << endl;
    // print_collection(ints1);
    //
    // cout << "ints2: " << endl;
    // print_collection(ints2);
    //
    // cout << "ints1_adj: " << endl;
    // print_collection_adj(ints1, 1, 2);
    //
    // cout << "ints2_adj: " << endl;
    // print_collection_adj(ints2,1,1);
    //
    // vector<int> brojevi {1,2,3,4,5,6,7,8,9,10};
    //
    // //Reverse iterator
    // //auto it = brojevi.rbegin();
    // vector<int>::reverse_iterator it = brojevi.rbegin();
    //
    // *it = 34;
    //
    // cout << "Brojevi: ";
    // while (it != brojevi.rend()){
    //     cout << " " << *it;
    //     ++it;
    // }

    list<int> numbers = {11,12,13,14,15};

    cout << "------------------------" << endl;
    cout << "Pristup elementima " << endl;

    print_collection(numbers);

    cout << "front element: " << numbers.front() << endl;
    cout << "back element: " << numbers.back() << endl;

    auto it_back = numbers.rbegin();

    cout << "(iterator) lista elemenata (reverse:) [ ";
    while (it_back != numbers.rend()){
        cout << " " << *it_back;
        ++it_back;
    }
    cout << "]" << endl;

    //Kapacitet
    cout << "---------------------------" << "\n";
    cout << "Kapacitet " << "\n";

    cout << "\n";
    cout << " list max_size " << numbers.max_size() << endl;
    cout << boolalpha;
    cout << " list is empty " << numbers.empty() << endl;
    cout << " list size " << numbers.size() << endl;

    //Modifikatori
    cout << "---------------------------" << endl;
    cout << "Modifikatori " << "\n";

    cout << " clear " << "\n";

    print_collection(numbers);
    numbers.clear();
    print_collection(numbers);

    cout << boolalpha;
    cout << "numbers is empty " << numbers.empty() << endl;

    //Insert
    cout << "---------------------------" << endl;
    cout << "Insert " << "\n";
    numbers = {11,12,13,14,15};
    print_collection(numbers);

    cout << "it_insert(333) " << endl;
    auto it_insert = find(numbers.begin(), numbers.end(), 13);

    if (it_insert != numbers.end())
        numbers.insert(it_insert, 333);

    print_collection(numbers);

    //Emplace
    //Erase

    return 0;
}