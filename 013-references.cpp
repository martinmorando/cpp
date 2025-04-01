/*
    References
    - A reference variable is an alias for an existing variable.
    - Any changes made to the reference variable will affect the original.
*/

#include <iostream>

int main() {

    int total_coins = 21000000;

    // n is a reference to total_coins
    int &n = total_coins;

    // Any modification to n will also modify total_coins
    n /= 2;

    std::cout << total_coins;

    return 0;

}