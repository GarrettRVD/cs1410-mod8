//
// Created by GRees on 11/8/2017.
//

#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;

/*!
 * Constructor with one argument
 * @param s
 */
MyString::MyString(char *s)
{
    int length = strlen(s);                          // length of input string

    // Get memory
    str = new char[length+1];
    strcpy(str, s);                                  // copy argument to new allocated space, and save address to str

}

/*!
 * Destructor
 */
MyString::~MyString()
{
    cout << "Deleting memory" << endl;
    delete[] str;
}

/*!
 * display : displays str
 */
void MyString::display()
{
    cout << str << endl;

}

/*!
 * updateString : This will allocate new memory.
 * Change my pointer to the new space
 * Delete old memory
 * @param newStr : New String to update
 */
void MyString::updateString(char *newStr)
{
    int length = strlen(newStr);                    // length of input string
    char *temp = new char[length + 1];              // allocate new memory
    strcpy(temp, newStr);
    delete [] str;
    str = temp;


}
