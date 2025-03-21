/*
    Numbers
*/

#include <iostream>
#include <cmath> // Import cmath library to use its functions

int main() {

    // [DECLARE]
    // - An integer
    int x = 2;

    // - A double
    double y = 1.3;



    // [BASIC OPERATIONS]
    std::cout << x+y << "\n";           // 3.3
    std::cout << x-y << "\n";           // 0.7
    std::cout << x*y << "\n";           // 2.6
    std::cout << x/y << "\n";           // 1.53846
    std::cout << 2%1 << "\n";           // 0
    


    // [CMATH LIBRARY]
    // - Exponentiation: "**" operator does not exist in C++
    std::cout << pow(2,3) << "\n";      // 8

    // - Square root
    std::cout << sqrt(9) << "\n";       // 3

    // - Absolute value
    std::cout << fabs(-9) << "\n";      // 9

    // - Floor
    std::cout << floor(4.14) << "\n";   // 4

    // - Ceil
    std::cout << ceil(4.14) << "\n";    // 5

    // - Round: to the nearest integer
    std::cout << round(4.14) << "\n";   // 4

    // - Truncate: removes decimal part
    std::cout << trunc(4.14) << "\n";   // 4

    return 0;
    
}