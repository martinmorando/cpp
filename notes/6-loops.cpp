/*
    Loops
*/

#include <iostream>

int main() {

    // For loop
    for (int i=1; i<=10; i++) {
        std::cout << "for loop: " << i << "\n";
    }

    // While loop
    int n = 1;
    while (n <= 10) {
        std::cout << "while loop: " << n << "\n";
        n++;
    }

    return 0;

}