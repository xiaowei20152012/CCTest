//
// Created by liwei on 2021/6/24.
//

#include "Apple.h"
#include <iostream>
using namespace std;

Apple::Apple(int i):apple_num(i)
{}

int Apple::add(int num)
{
    take(num);
}

int Apple::add(int num) const {
    take(num);
}

void Apple::take(int num) const {
    cout << num << endl;
}

int Apple::getCount() const {
    take(1);
    return apple_num;
}
