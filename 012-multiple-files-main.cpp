/*
    Files 012-* show how to use multiple files in C++ for better organization.

    Main
    - Contains main function.
    - Includes reference to header.
    - Note: use simpler file names.
    - Compile program with command:
       g++ 012-multiple-files-functions.cpp 012-multiple-files-header.hpp 012-multiple-files-main.cpp
*/

#include <iostream>

// Include the header file
#include "012-multiple-files-header.hpp" // Use ""

int main() {

    // Call function
    std::cout << shout("Bitcoin");

}