#include <iostream>

/*
 * c++ 与 c编译区别
 * 在c++中常见的extern "C" 修饰函数，是用于c++链接在C语言模块中定义的函数
 * c++虽然兼容c，但c++文件中函数编译后生成的符号与c语言生成的不同。因为c++支持函数重载
 * c++函数编译后生成的符号带有函数参考类型的信息，而c没有
 *
 * 例如 int add（int a，int b）函数经过c++编译器生成.o文件后，add函数会变成如add_int_int这样，而c会生成_add
 * 就是说相同的函数在不同的编译器会生成不同的符号
 * 所以使用extern "C" 来限定使用哪个编译器
 * 
 */

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
