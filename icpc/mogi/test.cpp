#include <cstdlib>
#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
    const std::string str("123");
    int num = std::atoi(str.c_str());
    std::cout << typeid(num).name() << " : " << num << std::endl;
}
