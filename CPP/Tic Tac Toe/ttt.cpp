//Tic-Tac-Toe App
//Daniel Iannotti

/* Project Requirements :

1. Loops: This program should use a for loop or while loop to iterate through the player turns.
2. Vectors: This program should use a vector or an array to hold nine positions of the 3x3 grid.
3. Functions: This program should be modular.
*/
#include <iostream>
#include <vector>
#include "ttt.h"

int main() {
	std::vector<char> board;
	bool end_game = false;
	int move;

	board = new_game(board);
	print_board(board);

	while (end_game != true) {
		move = get_user_move(board);
		board = mark_space(board, move - 1, 'X');
		if (check_win(board, 'X') == true) {
			std::cout << "You Win!\n";
			end_game = true;
			print_board(board);
			break;
		}
		print_board(board);
		move = get_computer_move(board);
		board = mark_space(board, move - 1, 'O');
		if (check_win(board, 'O') == true) {
			std::cout << "You Lose!\n";
			end_game = true;
			print_board(board);
			break;
		}
		print_board(board);
	}
}



