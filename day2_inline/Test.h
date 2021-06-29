//
// Created by liwei on 2021/6/28.
//

#ifndef DAY2_INLINE_TEST_H
#define DAY2_INLINE_TEST_H

#include <iostream>
using namespace std;

class Base
{
public:
    inline virtual void who()
    {
        cout << "I am Base \n";
    }
    virtual ~Base()
    {

    }
};

class Derived : public Base
{
public:
    inline void who()
    {
        cout << "I am derived\n";
    }
};


#endif //DAY2_INLINE_TEST_H
