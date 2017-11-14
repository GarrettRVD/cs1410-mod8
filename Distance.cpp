//
// Created by GRees on 11/9/2017.
//

#include <iostream>
using namespace std;
#include "Distance.h"

Distance::Distance()
{
    feet = 0;
    inches = 0.0;
}

Distance::Distance(int f, float i)
{
    feet = f;
    inches = i;
}

/*!
 * getDistance : asks the user to enter feet and inches
 */
void Distance::getDistance()
{
    cout << "\nEnter feet: ";
    cin >> feet;
    cout << "\nEnter inches: ";
    cin >> inches;

    if(inches >= 12.0)                                                  // too big
    {
        throw InchesEx();
        //throw "Bad input, index too high";                            // homework
    }
}

void Distance::showDistance()
{
    cout << feet << "\'-" << inches << "\"";
}
