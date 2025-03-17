/*
    User input
*/

#include <iostream>

int main() {

    // Declare variable to save user input
    std::string username;
    
    // Ask user for username
    std::cout << "Enter your username: ";

    // Receive user input. Notice the direction of ">>"
    std::cin >> username;

    // Display message
    std::cout << "Your name is: " << username << "\n";

    return 0;

}