#include <iostream>
#include <iomanip>

int main(int argc, char **argv){

    bool red_light {true};
    bool green_light {false};

    std::cout << std::boolalpha;
    std::cout << "Red light is: " << red_light << std::endl;
    std::cout << true << std::endl;
    std::cout << false << std::endl;

}