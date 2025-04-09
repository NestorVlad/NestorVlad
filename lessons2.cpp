#include <iostream>
#include <cmath>

int main ()
{
    std::cout << "Enter a number in the range 1-100: " ;
    int number;
    std::cin >> number;
    if (number > 1 && number <= 100) {
        std::cout << "Right" <<std::endl;
    } else {
        std::cout << "incorrectly" <<std::endl;
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}