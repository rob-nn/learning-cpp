#include <iostream>



int main(int argc, char **argv){
    unsigned int value1 {10};
    unsigned int value2 = -300;

    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;

    std::cout << "short " << sizeof(short) << std::endl;
    std::cout << "int " << sizeof(int) << std::endl; 
    std::cout << "long " << sizeof(long) << std::endl; 
    std::cout << "long long " << sizeof(long long) << std::endl; 
    std::cout << "int8_t " << sizeof(int8_t) << std::endl;


    return 0;
}