#include <iostream>

int main(int argc, char **argv){
    auto a {1};
    auto b {"abcd"};
    
    a = 3.3;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << sizeof(long double) << std::endl;
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(long long) << std::endl;
}