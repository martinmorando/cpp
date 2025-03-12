#include <iostream>
#include <string>   // Required when working with strings

int main() {
    // Declare string variable
    std::string message = "The message goes here.";	

    // Print string length
    std::cout << message.length();

    // Print substring "he"
    std::cout << message.substr(1,3);
}