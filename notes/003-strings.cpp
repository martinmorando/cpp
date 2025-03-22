/*
    Strings
*/

#include <iostream>
#include <string>   // Required when working with strings

int main() {
    
    // Declare a string variable...
    std::string name;
    // ... and initialize it
    name = "";

    // Declare and initialize a string variable in one line
    std::string message = "The message goes here."; 

    // Print string length
    std::cout << message.length();

    // Print substring "he" (starting index, ending index excluded)
    std::cout << message.substr(1,3);

    // Chaining output
    std::cout << "A" << "B" << "C" << message.length();

    return 0;
    
}