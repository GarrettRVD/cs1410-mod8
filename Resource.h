//
// Created by GRees on 11/14/2017.
//

#ifndef MOD8_PERSON_H
#define MOD8_PERSON_H

#include <iostream>
using namespace std;

class Resource
{
private:
    string name;
public:
    Resource(string n);
    ~Resource();

    string GetName() const;
};

#endif //MOD8_PERSON_H