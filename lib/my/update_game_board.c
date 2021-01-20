/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** update game board
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

void update_game_board(int line, int nb_matches, char **game_board)
{
    int i = my_strlen(game_board[line]);
    for (; game_board[line][i] != '|'; i--);
    for (int j = 0; j < nb_matches; j++, i--)
        game_board[line][i] = ' ';
}