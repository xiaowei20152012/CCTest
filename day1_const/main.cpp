#include <iostream>
#include "Myc.h"
#include "Apple.h"
/**
 * const
 * 常类型是指使用类型修饰符const说明的类型，常类型的变量或对象的值是不能被更新的。
 *
 *
 *
 */

// 可以定义常量
const int a = 100;

// 可以检查类型
// const 常量与 #define 常量区别
// const 常量具有类型，编译器可以检查
// #define 宏定义没有数据类型，只有简单的字符串替换，不能安全检查
//const定义的变量只有类型为整数或枚举，且以常量表达式初始化时才能作为常量表达式。
//其他情况下它只是一个 const 限定的变量，不要将与常量混淆

//防止修改起到保护作用
void f(const int a) {

}

// 可以节省空间，减少不必要的内存消耗
//const定义常量从汇编的角度来看，只是给出了对应的内存地址，而不是像#define一样给出的是立即数。
//const定义的常量在程序运行过程中只有一份拷贝，而#define定义的常量在内存中有若干个拷贝。

const int b = 100;
//  常量不可更改
// 常量必须初始化
int main()
{
    std::cout << "Hello, World!" << std::endl;
    using namespace std;
    cout << "hello";
    cout << d;
    cout << endl;
//    const char * a; //指向const对象的指针或者说指向常量的指针。
//    char const * a; //同上
//    char * const a; //指向类型对象的const指针。或者说常指针、const指针。
//    const char * const a; //指向const对象的const指针。

    const char * first; //指向const对象的指针活着说指向常量的指针
    char const * second; // 指向const对象的指针， 指向常量的指针

    char * const third = {};//指向类型对象的const指针。或者说常指针、const指针。
    const char * const forth = {};//指向const对象的const指针
    //小结：如果const位于*的左侧，则const就是用来修饰指针所指向的变量，即指针指向为常量；
    //如果const位于*的右侧，const就是修饰指针本身，即指针本身是常量。
    // 1 指向常量的指针
    const int *ptr;
//    *ptr = 10;//error
    // ptr 是一个指向int类型const对象指针，const定义的是int类型，也就是ptr指向的对象，不是ptr本身，所以ptr可以不用初始化

    //也不能使用 void * 指针保存const对象的地址，必须使用const void * 类型的指针保存const对象的地址

    const int p  = 10;
    const void * pv = &p;
//    void *pv = &p; // error

//    另一个重点是：允许把非const对象的地址赋给指向const对象的指针。

    // 把非const对象的地址赋给const对象的指针
    const int *pttr;
    int val = 3;
    pttr = &val;// right
//    我们不能通过pttr指针来修改val的值
    int *pttr1 = &val;
    *pttr1 = 4;
    cout << *pttr << endl;

    // 小结
    //对于指向常量的指针，不能通过指针来修改对象的值
    //不能使用void * 指针保存const对象的地址，必须使用const void * 类型的指针保存const对象的地址
    //允许把非const对象的地址赋值给const对象的指针，如果要修改指针所指向的对象值，必须通过其他方式来修改，不能直接修改


    int num = 10;
//    int * t = &num;
//    *t = 1;

    int * const ptt = &num;
    cout << *ptt << endl;

    //常指针
    //const 指针必须进行初始化，且const指针值不能修改


     const int num1 = 3;
     const int * const pnum1 = &num1;

     cout << *pnum1 << endl;

     // 函数中使用const const修饰普通变量以及指针的含义基本相同
//     const int func1();

//    const int* func2();
    //指针指向的内容不变
    // void func(const int var) 传递过来的参数不可变
    // void func(int *const var) 指针本身不可变

    Apple ta(2);
    cout << ta.getCount() << endl;
    ta.add(10);
    const Apple tb(3);
    tb.add(100);

    return 0;
}
