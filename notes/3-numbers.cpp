/*
    Numbers
*/

#include <iostream>
#include <cmath> // Import cmath library to use pow() ("**" operator is not valid in C++)

int main() {

    // Declare an integer
    int x = 2;

    // Declare a double
    double y = 1.3;

    // Basic operations
    std::cout << x+y << "\n";       // 3.3
    std::cout << x-y << "\n";       // 0.7
    std::cout << x*y << "\n";       // 2.6
    std::cout << x/y << "\n";       // 1.53846
    std::cout << 2%1 << "\n";       // 0
    
    std::cout << pow(2,3) << "\n";  // 8

    return 0;
    
}