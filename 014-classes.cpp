/*
    Classes
*/

#include <iostream>
#include <string>

class Company {

    // [ATTRIBUTES] (or member data)
    std::string name;
    std::string owner;
    int n_bitcoins;

public:

    // [METHODS] (or member functions)

    // - Constructor: same name as the class
    Company(std::string name, std::string owner, int n_bitcoins) : 
    name(name), owner(owner), n_bitcoins(n_bitcoins) {}

    // - Getter
    std::string get_name() {
        return name;
    }

    // - Destructor
    ~Company() {
        std::cout << "\nobject destroyed automatically: " << name;
    }
    
};


int main() {

    // Initiate instance
    Company m("M Inc.", "Martin", 10000);
    std::cout << m.get_name();

    return 0;

}