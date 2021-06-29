#include <iostream>

using namespace std;

class A
{
public:
    char b;
    virtual void fun() {}
    static int c;
    static int d;
    static int f;
};
/**
 * 对于包含虚函数的类，不管多少虚函数，只有一个虚指针， vptr 大小8
 */

// 普通的单继承，继承就是基类➕派生类自身的大小（注意字节的对齐）
// 注意：类的数据成员按其声明顺序加入内存，与访问权限无关，只看声明顺序
// 虚单继承，派生类继承基类vptr




int main()
{
    /**
     * 16 字节对齐 静态变量不影响类的大小， vptr指针 8
     */
     cout<< sizeof(A) <<endl;
     int a = 10;
     int *P = &a;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
