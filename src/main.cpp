#include <iostream>
#include "math_lib.h"

using namespace MathLib;

int main(int argc, char *argv[])
{
    double num1 = 10.5, num2 = 2.5;

    std::cout << "Addition: " << add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << multiply(num1, num2) << std::endl;
    std::cout << "Division: " << divide(num1, num2) << std::endl;
    std::cout << "GCD: " << GCD(num1, num2) << std::endl;
    std::cout << "Square root: " << sqrt(num1) << std::endl;
    std::cout << "Least common multiple(4,6): " << leastCommonMultiple(4, 6) << std::endl;
    return 0;
}
