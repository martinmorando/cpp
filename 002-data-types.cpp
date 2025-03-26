/*
    Some data types
*/

#include <iostream>
#include <string>

int main() {

    // [DATA TYPES]
    // - Integer number
    int n1 = 3;

    // - Double: floating-point number
    double n2 = 3.1;

    // - Char: individual character. Requires single-quotes ('')
    char m1 = 'a';

    // - String: sequence of characters. Requires <string> header
    std::string openSecret = "Bitcoin";

    // - Boolean: true/false
    bool isRevolution = true;



    // [CONSTANT]
    const int iCantChange = 10;
    // iCantChange = 11;    // error: assignment of read-only variable ‘iCantChange’


    // [TYPE CASTING]: convert from one type to another    
    double n3 = 2.11111;
    int n4 = (int) n3;      // Double to integer
    std::cout << n4;        // Output: 2


    return 0;

}