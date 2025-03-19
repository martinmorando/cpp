/*
    Vectors
    - 0-indexed
    - size can change
*/

#include <iostream>
#include <vector>   // Required when working with vectors
#include <string>   // Some examples use std::string

int main() {

    // [Create a vector (AKA "dynamic array")]: size can change, can add or remove elements
    // Declare a vector that will hold double values...
    std::vector<double> shirtPrices;
    // ... and initialize the vector
    shirtPrices = {16.25, 35.99};

    // Declare and initiate a vector that will hold integers, in one line
    std::vector<int> dressPrices = {24, 78, 32};

    // Declare and initiate a vector that will hold chars
    std::vector<char> charVector = {'a', '3'};

    // Declare and initiate a vector that will hold strings
    std::vector<std::string> strVector = {"AA", "BB", "CC"};

    // Declare and initiate a vector that will hold strings
    std::vector<std::string> repetitiveVersion = {"A", "A", "A", "A"};
    // Same but simpler
    std::vector<std::string> simplerVersion(4, "A");



    // [Access element]: by index
    std::cout << dressPrices[1] << "\n";    // 78



    // [Some useful functions]
    // Add an element to the end of a vector
    strVector.push_back("DD");

    // Remove the last element from the end of a vector
    strVector.pop_back();                   // Returns nothing

    // Get the number of elements in the vector
    std::cout << strVector.size();          // 2

}