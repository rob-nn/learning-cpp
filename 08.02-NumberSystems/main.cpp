#include <iostream>

int main(int argc, char **argv){
    int number1 = 15; // Decimal
    int number2 = 017; //Octal
    int number3 = 0xF; //Hexadecimal
    int nubber4 = 0b00001111; //Binary

    std::cout << "Decimal: " << number1 << std::endl; 
    std::cout << "Octal: " << number2 << std::endl;
    std::cout << "Hexadecimal: " << number3 << std::endl;
    std::cout << "Binary: " << nubber4 << std::endl;

    return 0;
}