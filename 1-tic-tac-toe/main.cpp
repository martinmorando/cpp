#include "functions.hpp"
#include <cstdlib> // To clear the console
#include <unistd.h> // To make pauses

int main() {

	std::vector<std::string> gameMap = {"1A", "1B", "1C", "2A", "2B", "2C", "3A", "3B", "3C"};
	std::vector<std::string> gameBoard(9, " ");
	std::string player1, player2;
	std::string reply1, reply2;

	// Welcome message and request player names
	system("clear");
	std::cout << "Welcome to Tic-Tac-Toe!\n";
	std::cout << "\n";
	std::cout << "Name of player 1 (x): ";
	std::cin >> player1;
	std::cout << "Name of player 2 (o): ";
	std::cin >> player2;
	std::cout << "\n";
	std::cout << player1 << ", " << player2 << ", you will indicate the position with a number and a letter.\n";
	std::cout << "\n";

	sleep(3);
	system("clear");

	std::cout << "For example, 3B (or b3) means:\n";
	std::cout << "\n";
	std::cout << "    A  B  C " << "\n";
	std::cout << " 1 [ ][ ][ ]" << "\n";
	std::cout << " 2 [ ][ ][ ]" << "\n";
	std::cout << " 3 [ ][x][ ]" << "\n";
	std::cout << "\n";

	sleep(5);
	system("clear");

	std::cout << "------------------------START!------------------------\n";

	int keepPlaying = 1;
	while (keepPlaying == 1) {

		system("clear");
		printGameBoard(gameBoard);
		std::cout << '\n';

		// Ask player 1 to move. If input is invalid, try 2 more times
		for (int t=0; t<3; t++) {			
			std::cout << player1 << ", your turn: ";
			std::cin >> reply1;

			reply1 = validateInput(reply1);
			
			if (reply1 == "invalid") {
				std::cout << "Invalid input. Try again. \n";
			} else {
				break;
			}
		}
		
		system("clear");
		gameBoard = savePlayerMove(gameBoard, gameMap, 1, reply1);
		printGameBoard(gameBoard);
		std::cout << '\n';


		// Ask player 2 to move. If input is invalid, try 2 more times
		for (int t=0; t<3; t++) {			
			std::cout << player2 << ", your turn: ";
			std::cin >> reply2;

			reply2 = validateInput(reply2);
			
			if (reply2 == "invalid") {
				std::cout << "Invalid input. Try again. \n";
			} else {
				break;
			}
		}

		system("clear");
		gameBoard = savePlayerMove(gameBoard, gameMap, 2, reply2);
		printGameBoard(gameBoard);

		std::cout << '\n';

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