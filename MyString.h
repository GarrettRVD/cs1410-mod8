//
// Created by GRees on 11/8/2017.
//

#ifndef MOD8_MYSTRING_H
#define MOD8_MYSTRING_H


class MyString
{
private:
    char *str;                                          // pointer to a string
public:
    MyString(char *s);                                  // constructor, one argument
    ~MyString();                                        // Destructor

    void display();                                     // display string
    void updateString(char *newStr);                    // update string

};


#endif //MOD8_MYSTRING_H
