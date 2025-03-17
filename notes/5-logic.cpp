/*
    Logic
    - Relational operators: ==, !=, >, >=, <, <=
    - Logical operators: &&, ||, !
*/

#include <iostream>

int main() {

    int i = 2;

    // Conditional
    if (i > 2) {
        std::cout << "i > 2";
    } else if (i < 2) {
        std::cout << "i < 2";
    } else {
        std::cout << "i = 2";
    }


    // Switch
    switch (i) {
        case 0:
            std::cout << "i = 0";
            break;
        case 1:
            std::cout << "i = 1";
            break;
        case 2:
            std::cout << "i = 2";
            break;
        default:
            std::cout << "i is not 0, 1 nor 2";
            break;
    }

}