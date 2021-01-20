/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** create game board
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

void malloc_tab_and_fill_star(char **game_board, int last_line, int n)
{
    for (int i = 0; i < n + 2; i++)
        game_board[i] = malloc(sizeof(char) * last_line + 3);
    for (int i = 0; i < last_line + 2; i++) {
        game_board[0][i] = '*';
        game_board[0][i + 1] = '\0';
    }
    for (int i = 0; i < last_line + 2; i++) {
        game_board[n + 1][i] = '*';
        game_board[n + 1][i + 1] = '\0';
    }
}

void fill_tab_with_star(char **game_board, int last_line, int n)
{
    for (int i = 0; i < last_line + 2; i++) {
        game_board[0][i] = '*';
        game_board[0][i + 1] = '\0';
    }
        for (int i = 0; i < last_line + 2; i++) {
        game_board[n + 1][i] = '*';
        game_board[n + 1][i + 1] = '\0';
    }
}

char **create_game_board(char **game_board, int n)
{
    int last_line = n * 2 - 1;
    int nb_space = (last_line - 1) / 2;
    int nb_stick = 1;
    int j = 1;
    malloc_tab_and_fill_star(game_board, last_line, n);
    for (int i = 1; i < n + 1; i++) {
        game_board[i][0] = '*';
        for (int k = 0; k < nb_space; j++, k++)
            game_board[i][j] = ' ';
        for (int k = 0; k < nb_stick; k++, j++)
            game_board[i][j] = '|';
        for (int k = 0; k < nb_space; j++, k++)
            game_board[i][j] = ' ';
        game_board[i][j] = '*';
        game_board[i][j + 1] = '\0';
        nb_space -= 1;
        nb_stick += 2;
        j = 1;
    }
    return (game_board);
}