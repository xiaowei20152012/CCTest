//
// Created by liwei on 2021/6/24.
//

#ifndef DAY1_THIS_PERSON_H
#define DAY1_THIS_PERSON_H

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
public:
    typedef enum
    {
        BOY = 0,
        GIRL
    } SexType;

    Person(char *n, int a, SexType s)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
        sex = s;
    }

    int get_age() const
    {
        return this->age;
    }

    Person &add_age(int a)
    {
        age += a;
        return *this;
    }

    ~Person() {
        delete [] name;
    }

private:
    char *name;
    int age;
    SexType sex;
};





#endif //DAY1_THIS_PERSON_H
