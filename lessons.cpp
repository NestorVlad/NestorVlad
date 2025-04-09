#include <iostream>
#include <cmath>

int main()
{
    double a = 0, b = 0, c = 0;

    std::cout << "Enter coefficient A: ";
    std::cin >> a;

    std::cout << "Enter coefficient B: ";
    std::cin >> b;

    std::cout << "Enter coefficient C: ";
    std::cin >> c;

    if (a == 0) {
        std::cout << "This is not a quadratic equation (A cannot be 0)." << std::endl;
    } else {
        double discriminant = b * b - 4 * a * c;

        std::cout << "Discriminant (D) = " << discriminant << std::endl;

        if (discriminant > 0) {
            double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
            double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
            std::cout << "Two real roots: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        } else if (discriminant == 0) {
            double x = -b / (2 * a);
            std::cout << "One real root: x = " << x << std::endl;
        } else {
            std::cout << "No real roots (discriminant < 0)." << std::endl;
        }
    }

    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.ignore();
    std::cin.get();

    return 0;
}