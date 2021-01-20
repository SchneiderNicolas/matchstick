/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** my.h
*/

#include "struct.h"

#ifndef MY_H
    #define MY_H

unsigned int my_strlen(char const *str);
void my_putstr(char const *str);
void my_putchar(char c);
void my_putnbr(long long int nb);
void my_puterr(char const *str);
int my_getnbr(char const *str);
char **create_game_board(char **game_board, int n);
void print_game_board(char **game_board, int n);
void print_game_board_end(char **game_board, int n);
void update_game_board(int line, int nb_matches, char **game_board);
int input(void);
int count_matches(char **game_board, int line);
int read_player_move_and_print(game_info_t *game_info);
int norm(int nb_one_match_line, ai_info_t *ai_info);
void ai_choice(game_info_t *game_info,  ai_info_t *ai_info);
int check_matches(game_info_t *game_info, ai_info_t *ai_info);
void biggest_line(game_info_t *game_info, ai_info_t *ai_info);
int calc_nim_sum(game_info_t *game_info);
void ai_turn(game_info_t *game_info, ai_info_t *ai_info);
int player_turn(game_info_t *game_info);
int game_finish(char **game_board, int line);
int remove_matches(game_info_t *game_info, ai_info_t *ai_info, int nim_sum);
int remove_one_matche(game_info_t *game_info, ai_info_t *ai_info);
int start_game(char **argv);

#endif