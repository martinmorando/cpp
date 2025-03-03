#include <string>
#include <vector>
#include "functions.hpp"

// Print current game board status
void printGameBoard(std::vector<std::string> gameBoard) {

	std::cout << "[ ][A][B][C]" << "\n";
	std::cout << "[1]["<< gameBoard[0] << "][" << gameBoard[1] << "][" << gameBoard[2] << "]" << "\n";
	std::cout << "[2]["<< gameBoard[3] << "][" << gameBoard[4] << "][" << gameBoard[5] << "]" << "\n";
	std::cout << "[3]["<< gameBoard[6] << "][" << gameBoard[7] << "][" << gameBoard[8] << "]" << "\n";

}


// Save new player movement and return gameBoard
std::vector<std::string> savePlayerMove(std::vector<std::string> gameBoard, std::vector<std::string> gameMap, int player, std::string reply) {

	std::string letter;

	if (player == 1) {
		letter = "x";
	} else {
		letter = "o";
	}

	// Check if position in gameBoard is already occupied
	// For this, first get index from gameMap (is there a function similar to Python .index()?)
	for (int i=0; i < gameMap.size(); i++) {
		if (reply == gameMap[i]) {
			// We have the index. Save the letter in the position but first check if the position occupied
			if (gameBoard[i] != " ") {
				std::cout << "Position already in use! You lose your turn. \n";
			} else {
				gameBoard[i] = letter;
			}
		}
	}

	return gameBoard;

}


// Inspect the gameboard to check if there is a winner and return the letter of the winner ("x" or "o").
// If there's no winner, it could be a tie. If not, then return "0" to keep playing
std::string getWinnerLetter(std::vector<std::string> gameBoard) {

	// Row 1
	if (gameBoard[0] == gameBoard[1] && gameBoard[1] == gameBoard[2]) {	
		return gameBoard[0];
	}
	// Row 2
	else if (gameBoard[3] == gameBoard[4] && gameBoard[4] == gameBoard[5]) {
		return gameBoard[3];
	}
	// Row 3
	else if (gameBoard[6] == gameBoard[7] && gameBoard[7] == gameBoard[8]) {
		return gameBoard[6];
	}
	// Column 1
	else if (gameBoard[0] == gameBoard[3] && gameBoard[3] == gameBoard[6]) {
		return gameBoard[0];
	}
	// Column 2
	else if (gameBoard[1] == gameBoard[4] && gameBoard[4] == gameBoard[7]) {
		return gameBoard[1];
	}
	// Column 3
	else if (gameBoard[2] == gameBoard[5] && gameBoard[5] == gameBoard[8]) {
		return gameBoard[2];
	}
	// Diagonal 1
	else if (gameBoard[0] == gameBoard[4] && gameBoard[4] == gameBoard[8]) {
		return gameBoard[0];
	}
	// Diagonal 2
	else if (gameBoard[2] == gameBoard[4] && gameBoard[4] == gameBoard[6]) {
		return gameBoard[2];
	}
	

	// Tie
	bool emptySpace;
	for (int i=0; i<gameBoard.size(); i++) {
		if (gameBoard[i] == " ") {
			emptySpace = true;		
			break;
		}
	}
	if (!emptySpace) {
		return "tie";
	}


	// No one won, yet
	return "0";

}


// Accept only 1A, 1B, 1C, 2A, 2B, 2C, 3A, 3B, 3C while playing
bool validateInput(std::string input) {

	if (input.length() != 2) {
		return false;
	}

	char number = input[0];
	char letter = input[1];

	return ((number == '1' || number == '2' || number == '3') && (letter == 'A' || letter == 'B' || letter == 'C') );

}