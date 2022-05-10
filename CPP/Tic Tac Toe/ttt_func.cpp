#include <iostream>
#include <vector>
#include "ttt.h"

std::vector<char> new_game(std::vector<char> board) {
	board = { '1','2','3','4','5','6','7','8','9' };
	std::cout << "Board is ready! Your move!\n\n";
	return board;
}

void print_board(std::vector<char> board) {

	for (int i = 0; i < 9; i++) {
		std::cout << " " << board[i] << " ";
		if ((i+1) % 3 != 0) { std::cout << "|"; }
		if ((i+1) % 3 == 0 && i < 9) { std::cout << "\n---|---|---\n"; }
	}
	std::cout << "\n\n";
}
std::vector<char> mark_space(std::vector<char> space_board, int space, char XorO) {
	space_board[space] = XorO;
	return space_board;
}
int get_user_move(std::vector<char> user_board) {
	int space;
	bool is_valid = false;

	while (is_valid != true) {
		std::cout << "Select an availble space: ";
		std::cin >> space;

		if (user_board[space - 1] == 'X') {
			std::cout << "You already claimed that space! Choose another!\n";
		}
		else if (user_board[space - 1] == 'O') {
			std::cout << "Computer already claimed that space! Choose another!\n";
		}
		else {
			is_valid = true;
			std::cout << "Done!\n\n";
		}
	}
	return space;
}

int get_computer_move(std::vector<char> comp_board) {
	srand(time(NULL));
	int space;
	bool is_valid = false;

	while (is_valid != true) {
		space = rand() % 9 + 1;
		std::cout << "The computer selects space " << space << "\n\n";
		if (comp_board[space - 1] == 'X') {
			std::cout << "Thinking...\n";
		}
		else if (comp_board[space - 1] == 'O') {
			std::cout << "Thinking...!\n";
		}
		else {
			is_valid = true;
			std::cout << "Done!\n\n";
		}
	}
	return space;
}

bool check_win(std::vector<char> win_board,char player) {
	//check horizontal
	if (win_board[0] == player && win_board[1] == player && win_board[2] == player) {
		return true;
	}
	else if (win_board[3] == player && win_board[4] == player && win_board[5] == player) {
		return true;
	}
	else if (win_board[6] == player && win_board[7] == player && win_board[8] == player) {
		return true;
	}
	//check vertical
	else if (win_board[0] == player && win_board[3] == player && win_board[6] == player) {
		return true;
	}
	else if (win_board[1] == player && win_board[4] == player && win_board[7] == player) {
		return true;
	}
	else if (win_board[2] == player && win_board[5] == player && win_board[8] == player) {
		return true;
	}
	//check diagonal
	else if (win_board[0] == player && win_board[4] == player && win_board[8] == player) {
		return true;
	}
	else if (win_board[2] == player && win_board[4] == player && win_board[6] == player) {
		return true;
	}
	else {
		return false;
	}
}
