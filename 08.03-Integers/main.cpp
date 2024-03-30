#include <iostream>
#include <string>

int main() {

    int elephant_count;
    
    int lion_count;

    int dog_count {10};

    int cat_count {15};

    int domesticated_animals { dog_count + cat_count };

    //int new_number {doesnt_exist};

    int norrowing_conversion ( 2.9 );


    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animals: " << domesticated_animals << std::endl;
    std::cout << "Norrowing conversion: " << norrowing_conversion << std::endl;


    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof dog_count: " << sizeof(dog_count) << std::endl;
    return 0;

}