#include "functions.hpp"

int main() {

	std::vector<std::string> gameMap = {"1A", "1B", "1C", "2A", "2B", "2C", "3A", "3B", "3C"};
	std::vector<std::string> gameBoard = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

	std::string player1;
	std::string player2;

	std::string reply1;
	std::string reply2;


	// Welcome message and request player names
	std::cout << "Welcome to Tic-Tac-Toe!\n";
	std::cout << "Name of player 1: ";
	std::cin >> player1;
	std::cout << "Name of player 2: ";
	std::cin >> player2;

	// Basic intro and example
	std::cout << player1 << ", you will be x.\n";
	std::cout << player2 << ", you will be o.\n";
	std::cout << "Indicate the position with number and letter.\n";
	std::cout << "------------------------EXAMPLE!------------------------\n";
	std::cout << "3B means:\n";
	std::cout << "[ ][A][B][C]" << "\n";
	std::cout << "[1][ ][ ][ ]" << "\n";
	std::cout << "[2][ ][ ][ ]" << "\n";
	std::cout << "[3][ ][x][ ]" << "\n";
	std::cout << "------------------------START!------------------------\n";

	int keepPlaying = 1;
	while (keepPlaying == 1) {

		// Ask player 1 to move. If input is invalid, try 2 more times
		for (int t=0; t<3; t++) {			
			std::cout << player1 << ", your turn: ";
			std::cin >> reply1;

			reply1 = normalizeInput(reply1);
			
			if (validateInput(reply1)) {
				break;
			} else {
				std::cout << "Invalid input. Try again. \n";
			}
		}
		
		gameBoard = savePlayerMove(gameBoard, gameMap, 1, reply1);
		printGameBoard(gameBoard);


		// Ask player 2 to move. If input is invalid, try 2 more times
		for (int t=0; t<3; t++) {			
			std::cout << player2 << ", your turn: ";
			std::cin >> reply2;

			reply2 = normalizeInput(reply2);

			if (validateInput(reply2)) {
				break;
			} else {
				std::cout << "Invalid input. Try again. \n";
			}
		}

		gameBoard = savePlayerMove(gameBoard, gameMap, 2, reply2);
		printGameBoard(gameBoard);


		// Check if there is a winner
		std::string winnerLetter = getWinnerLetter(gameBoard);

		if (winnerLetter == "x") {
			std::cout << player1 << " won! \n";
			keepPlaying = 0;
			return 0;
		} 
		else if (winnerLetter == "o") {
			std::cout << player2 << " won! \n";
			keepPlaying = 0;
			return 0;
		}
		else if (winnerLetter == "tie") {
			std::cout << "It's a tie! \n";
			keepPlaying = 0;
			return 0;
		}
		else {
			// Continue playing
			;
		}

	}

	return 0;

}