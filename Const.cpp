// File: Const.cpp
// Created by Garrett Van Dyke on 11/14/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Person.h"
using namespace std;
// Constants, Classes, Structures


// Prototypes
int Double(const int& x);

// Main Program
int main()
{
    int i = 3;
    const int ci = 3;
    i = 4;
    //ci = 4; // read only

    int j = 10;
    int dj = Double(j);
    int d10 = Double(10);
    //cout << dj << endl;
    //cout << d10 << endl;

    Person Waldo("Waldo", "Weber", 234);
    Waldo.setArNumber(456);
    //cout << Waldo.getArNumber() << endl;

    const Person cWaldo = Waldo;
    //cWaldo.setArNumber(987);                              // Constant object
    int wNumber = cWaldo.getArNumber();
    //cout << wNumber << endl;

    int *pi = &i;
    //cout << &i << endl;
    //cout << pi << endl;

    const int *pci = &ci;                                   // Pointer to a const

    Person *pWaldo = &Waldo;
    Person Someone("Someone", "Else", 345);
    cout << pWaldo->GetName() << endl;                      // Use arrow operator

    return 0;
}

// Function Definitions
int Double(const int& x)
{
    return x * 2;
}