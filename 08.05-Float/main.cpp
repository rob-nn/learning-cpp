#include <iostream>
#include <iomanip>

int main(int argc, char **argv){
    std::cout << "float: " << sizeof(float) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    std::cout << "long double: " << sizeof(long double) << std::endl;

    float n1 {1.1f};
    double n2 {1.1};
    long double n3 {1.1l};
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;

    float number {11111111};

    double nx {3.14e-11};
    nx = nx / 0.0;
    std::cout << nx << std::endl;
    float yx = 0.0 / 0.0;
    std::cout << yx + 1<< std::endl;

    float number1 {0.12345678f};
    double number2 {0.1234567890123456};
    double number3 {0.1234567890123456789012345};

    std::cout << std::setprecision(30);
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;

    double number4 {123456789.0};
    std::cout << number4 << std::endl;

    std::cout << std::setprecision(2)<< 1.2e-10 << std::endl;

}