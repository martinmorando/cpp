/*
    Compile
    Alternative A: g++ 1-strings.cpp              Creates executable file "a.out" 
    Alternative B: g++ 1-strings.cpp -o myname    Creates executable file "myname"
*/

// Include library "iostream" (input output stream)
#include <iostream>

int main() {

    // Print Hi and line break
    std::cout << "Hi\n";

    // Print ABC
    std::cout << "A" << "B" << "C";

    // The program ended successfully
    return 0;

}