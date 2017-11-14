//
// Created by GRees on 11/14/2017.
//

#include "Person.h"

Person::Person(string fn, string ln, int an)
{
    firstName = fn;
    lastName = ln;
    arNumber = an;
}

int Person::getArNumber() const
{
    return arNumber;
}

void Person::setArNumber(int arNumber)
{
    Person::arNumber = arNumber;
}

string Person::GetName() const
{
    return firstName + " " + lastName;
}

Person::~Person()
{

}

/*!
 * Compare Person < Person
 * @param p : reference to Person
 * @return True or False
 */
bool Person::operator<(Person &p) const
{
    return arNumber < p.arNumber;
}

/*!
 * Compare Person < Integer
 * @param n : integer
 * @return True or False
 */
bool Person::operator<(int n) const
{
    return arNumber < n;
}

/*!
 * Compare integer < Person
 * @param n : integer
 * @param p : reference to Person
 * @return True or False
 */
bool operator<(int n, const Person &p)
{
    return n < p.arNumber;
}


