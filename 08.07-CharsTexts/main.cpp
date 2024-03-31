#include <iostream>

int main(int argc, char **argv){
    char c1 {'a'};
    char c2 {49};
    std::cout << c1 << std::endl;    
    std::cout << c2 << std::endl;    
    std::cout << sizeof(c1) << std::endl;
    std::cout << static_cast<int>(c1) << std::endl;
}