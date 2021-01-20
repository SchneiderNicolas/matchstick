/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** read_input_and_print
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int read_line(game_info_t *game_info)
{
    int line;
    my_putstr("Line: ");
    line = input();
    if (line == -777)
        return -777;
    if (line == -666) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return 0;
    }
    if (line > game_info->line || line <= 0) {
        my_putstr("Error: this line is out of range\n");
        return (0);
    } else {
        return (line);
    }
}

void print_error_matches(game_info_t *game_info)
{
    my_putstr("Error: you cannot remove more than ");
    my_putnbr(game_info->max_matches);
    my_putstr(" matches per turn\n");
}

int read_matches(game_info_t *game_info, int line)
{
    int matches;
    my_putstr("Matches: ");
    if ((matches = input()) == -777)
        return -777;
    if (matches == -666) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return 0;
    }
    if (matches <= 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (0);
    }
    if (matches > game_info->max_matches) {
        print_error_matches(game_info);
        return 0;
    } else if (matches > count_matches(game_info->game_board, line)) {
        my_putstr("Error: not enough matches on this line\n");
        return (0);
    } else {
        return (matches);
    }
}

int read_player_move_and_print(game_info_t *game_info)
{
    int line;
    int matches;
    if ((line = read_line(game_info)) == -777)
        return -777;
    if (line == 0) {
        return read_player_move_and_print(game_info);
    }
    if ((matches = read_matches(game_info, line)) == -777)
        return -777;
    if (matches == 0) {
        return read_player_move_and_print(game_info);
    }
    update_game_board(line, matches, game_info->game_board);
    my_putstr("Player removed ");
    my_putnbr(matches);
    my_putstr(" match(es) from line ");
    my_putnbr(line);
    my_putchar('\n');
}