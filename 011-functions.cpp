/*
    Functions
*/

#include <iostream>
#include <string>

// Void: no return
void print_attitude_1() {
    std::cout << "'Many of life's failures are people who did not realize how close they were "
                 "to success when they gave up.' - Thomas Edison\n";
}

// Returns string
std::string attitude_2() {
    return "'All our dreams can come true if we have the courage to pursue them.' - Walt Disney\n";
}

// Returns boolean
bool is_unconformist() {
    return true;
}

// Returns double and expects 2 double parameters
double addition(double n1, double n2) {
    return n1 + n2;
}


int main() {

    // Call function
    print_attitude_1();                     // Output: 'Many of life's...

    // Output the function's return
    std::cout << attitude_2();              // Output: 'All our dreams...

    // Conditional check with function
    if (is_unconformist() == true) {
        std::cout << "You are hired!\n";    // Output: You are hired!
    }

    // Call addition() with arguments
    std::cout << addition(2, 3);            // Output: 5 

    return 0;

}