## Exploring ncurses

Several sources on the internet say using system() is not a good practice unless "you have to", so I will use *ncurses* for my software, a library that allows to create text-based user interfaces.

## Sources:
1. [How to clear the console in C++?](https://stackoverflow.com/questions/6486289/how-to-clear-the-console-in-c)
2. [Why system() is evil](https://cplusplus.com/articles/j3wTURfi/) (obtained from 1.)
3. [Ncurses C++: Your Guide to Terminal Wizardry](https://cppscripts.com/ncurses-cpp)

## Install
- `sudo apt-get install libncurses-dev`

## Compiling
Use `-l` to compile "against the library" ([include the library, which is already compiled code, in the final executable](https://stackoverflow.com/questions/23177550/what-does-it-mean-to-link-against-something)):
`g++ test.cpp -lncurses`
