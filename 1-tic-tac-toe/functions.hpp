#include <iostream>
#include <string>
#include <vector>

void printGameBoard(std::vector<std::string> gameBoard);

std::vector<std::string> savePlayerMove(std::vector<std::string> gameBoard, std::vector<std::string> gameMap, int player, std::string reply);

std::string getWinnerLetter(std::vector<std::string> gameBoard);

bool validateInput(std::string input);

