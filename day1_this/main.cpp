#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//一个对象的this指针不是对象本身的一部分，不会影响sizeof 的结果

// this 作用域在类的内部，当在类的非静态成员函数中访问类的非静态成员的时候，编译器会自动
// 将对象本身的地址作为一个隐含参数传递给函数。也就是说，即使你没有写上this指针，编译器
// 在编译的时候也会加上this的，它作为非静态成员函数的隐含形参，对成员的访问均通过this进行

// 其次，this指针的使用
// 在类的非静态成员函数中返回类对象本身的时候，直接使用 return *this
// 当参数与成员变量名相同时， 如 this->n=n

// 总结：this 在成员函数的开始执行前构造，在成员的执行结束后清除。