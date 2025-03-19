/*
    Arrays
    - 0-indexed
    - fixed-size
*/

#include <iostream>

int main() {

    // [Create array]: size cannot change, cannot add or remove elements 
    // Declare an array that will hold 5 "garbage values"
    // Read more: https://stackoverflow.com/a/1422774
    int numsA[5];

    // Declare an array of 3 elements and initiate it, in one line
    int numsB[] = {1, 3, 5};

    // [Access element]: by index
    // std::cout << numsA[1] << "\n";    // Outputs garbage value
    std::cout << numsB[1] << "\n";       // 3

    return 0;

}