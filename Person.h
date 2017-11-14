//
// Created by GRees on 11/14/2017.
//

#ifndef MOD8_PERSON_H
#define MOD8_PERSON_H

#include <iostream>
using namespace std;


class Person
{
private:
    string firstName;
    string lastName;
    int arNumber;
public:
    Person(string fn, string ln, int an);
    ~Person();

    string GetName() const;                     // return first + last name

    // Setter and Getter for the arNumber
    int getArNumber() const;

    void setArNumber(int arNumber);

    // Operator overload for < and >
    bool operator < (Person &p) const ;
    bool operator < (int n) const ;
    friend bool operator < (int n, const Person &p);

    // These should work with: 1) int < Person, 2) Person < int, 3) int > Person, 4) Person > int

};
bool operator < (int i, const Person &p);

#endif //MOD8_PERSON_H
