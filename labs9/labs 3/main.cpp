//
// Created by d-sava on 31. 8. 2026..
//

//pomocne biblioteke
#include "main.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Student {

    // Varijable
private:
    string ime, prezime;
    float prosek;

protected:
    string idStudent;

public:
    //konstruktor
    Student(string ime, string prezime, string idStudent, float prosek = 6.0) {
        this->ime = ime;
        this->prezime = prezime;
        this->idStudent = idStudent;
        this->prosek = prosek;
    }

    //virutelna funkcija koje ce biti implementirana
    virtual bool proveriIdStudent() = 0;

    //prijateljska funkcija za OPERATOR
    friend bool operator < (const Student& s1, const Student& s2) {
        return s1.prosek < s2.prosek;
    }

    //prijateljska funkcija za ISPIS
    friend ostream& operator << (ostream& out, const Student& s) {
        return out << s.ime << " " << s.prezime << " " << s.idStudent << " " << s.prosek << endl;
    }
};

class StudentInformatike : public Student {
public:
    using Student::Student;

    bool proveriIdStudent() override {
        int n = idStudent.length();

        if (n != 10)
            return false;

        for (int i = 0; i < n; i++) {
            if (!isdigit(idStudent[i]))
                return false;
        }

        return true;
    }
};

class StudentSoftverskog : public Student {

public:
    using Student::Student;

    bool proveriIdStudent() override {
        int n = idStudent.length();

        if (n != 10)
            return false;

        for (int i = 0; i < n; i++) {
            if (!isdigit(idStudent[i]))
                return false;
        }

        return true;
    }
};

int main() {

    StudentInformatike info1("Ime1", "Prezime1", "202400111");
    StudentInformatike info2("Ime2", "Prezime2", "202400111", 7.8);

    StudentSoftverskog soft1("Ime3", "Prezime3", "2024200333", 9.2);
    StudentSoftverskog soft2("Ime4", "Prezime4", "2024200333", 10.0);

    vector<Student*> studenti;

    studenti.push_back(&info1);
    studenti.push_back(&info2);
    studenti.push_back(&soft1);
    studenti.push_back(&soft2);

    Student* najmanjiProsek = nullptr;

    //studenti koji imaju najmanji prosek
    for (auto s : studenti) {

        if (najmanjiProsek == nullptr)
            najmanjiProsek = studenti[0];

        if (*s < *najmanjiProsek)
            najmanjiProsek=s;
    }

    cout << "Student sa najmanjim prosek: " << najmanjiProsek << endl;

    //provera studentskog indeksa
    for (auto s : studenti) {
        //kod - todo
    }

    return 0;
}

//Ispit
//1.definisati klase (varijable, konstruktor)
//2.definisati virtuelne funkcije
//3.definisati prijateljsku funkciju za ispis
//4.definisati prijateljsku funkciju za operator (poredjenje)
//5.definisati klasno nasledjivanje (student::studentSoftverskog)

