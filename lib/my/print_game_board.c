/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** print game board
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

void print_game_board(char **game_board, int n)
{
    for (int i = 0; i < n + 2; i++) {
        my_putstr(game_board[i]);
        write(1, "\n", 1);
    }
    my_putchar('\n');
}

void print_game_board_end(char **game_board, int n)
{
    for (int i = 0; i < n + 2; i++) {
        my_putstr(game_board[i]);
        write(1, "\n", 1);
    }
}