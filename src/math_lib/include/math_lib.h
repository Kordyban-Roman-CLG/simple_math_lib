#pragma once
#ifndef MATH_LIB_H
#define MATH_LIB_H
#include <stdexcept>

namespace MathLib
{
    template <typename T>
    T abs(T a)
    {
        return a > 0 ? a : -a;
    }
    template <typename T>
    T max(T a, T b)
    {
        return a > b ? a : b;
    }
    template <typename T>
    T min(T a, T b)
    {
        return a < b ? a : b;
    }
    // Function for addition
    template <typename T>
    T add(T a, T b)
    {
        return a + b;
    }

    // Function for subtraction
    template <typename T>
    T subtract(T a, T b)
    {
        return a - b;
    }

    // Function for multiplication
    template <typename T>
    T multiply(T a, T b)
    {
        return a * b;
    }

    // Function for division
    template <typename T>
    T divide(T a, T b)
    {
        if (b == 0)
        {
            throw std::invalid_argument("Division by zero is not allowed.");
        }
        return a / b;
    }

    // Function for comparing two floating point values
    bool isEqual(double a, double b, double tolerance = 0.000000001);

    // Square root function
    template <typename T>
    double sqrt(T a)
    {
        if (a == 0)
            return 0;
        if (a < 0)
            throw std::invalid_argument("Cannot get the square root of a negative number");
        double x = a;
        double result;
        int count = 0;
        while (true)
        {
            count++;
            result = 0.5 * (x + (a / x));
            if (isEqual(result, x))
                break;
            x = result;
        }
        return result;
    }

    // Function to check whether value is prime
    bool isPrime(int n);

    // Function to search least common multiple
    int leastCommonMultiple(int a, int b);

    // Function to search GCD
    int GCD(int a, int b);

    // The function to compute the third angle of a triangle given the first two angles
    int calculateThirdAngle(int a, int b);
}
#endif