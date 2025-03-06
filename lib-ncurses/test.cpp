/*
- Compile: g++ test.cpp -lncurses
*/
#include <ncurses.h> // Include the header file of ncurses

int main() {
    initscr(); // Start the ncurses library
    start_color(); // Start color support
    init_pair(1, COLOR_RED, COLOR_BLACK); // Define a color pair

    attron(COLOR_PAIR(1)); // Activate the color pair
    printw("Hello world"); // Print the text
    attroff(COLOR_PAIR(1)); // Deactivate the color pair

    refresh(); // Refresh the screen to show the text
    getch(); // Wait for user input before exiting

    endwin(); // End ncurses mode (without this the CLI stops working properly)
    return 0;
}
