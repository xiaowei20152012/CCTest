#include <iostream>

#include "Apple.h"

//int Apple::i = 1;
int main()
{
    std::cout << "Hello, World!" << std::endl;

    Apple obj1;
//    Apple obj2;
//    obj1.i = 2;
//    obj2.i = 3;
//    cout << obj1.i << endl;
    cout << "end main" << endl;
    return 0;
}

// 静态变量：函数中的变量，类中的变量
// 静态类成员： 类对象和类中的函数
static  int count  = 10;
// 函数中的静态变量，当声明为static时，空间将被程序生命周期内分配，即使多次调用该函数，静态变量的空间只分配一次
// 前一次的调用中的变量值通过下一次函数调用传递 不会重新初始化
// example

/*void demo()
{
    static int count = 0;
    count ++ ;
}
void test()
{
    for (int i = 0; i < 4; ++i)
    {
        demo();
    }
    // count 0, 1, 2, 3
}*/
//静态变量不能用构造函数初始化
//
