#pragma once
std::vector<char> new_game(std::vector<char> board);
void print_board(std::vector<char> print_board);
std::vector<char> mark_space(std::vector<char> space_board, int space, char XorO);
int get_user_move(std::vector<char> user_board);
int get_computer_move(std::vector<char> comp_board);
bool check_win(std::vector<char> win_board, char player);