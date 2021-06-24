//
// Created by liwei on 2021/6/24.
//
#include <iostream>

using namespace std;
#ifndef DAY1_STATIC_APPLE_H
#define DAY1_STATIC_APPLE_H


class Apple
{
public:
//    static int i;
    Apple()
    {
        // Do nothing
        cout << "Inside Constructor" << endl;
    }

    ~Apple()
    {
        cout << "Inside Destructor"<<endl;
    }
};


#endif //DAY1_STATIC_APPLE_H
