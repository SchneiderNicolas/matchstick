/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** start_game
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int start_game(char **argv)
{
    game_info_t *game_info = malloc(sizeof(game_info_t));
    ai_info_t *ai_info = malloc(sizeof(ai_info_t));
    game_info->line = my_getnbr(argv[1]);
    game_info->game_board = malloc(sizeof(char *) * game_info->line + 3);
    game_info->max_matches = my_getnbr(argv[2]);
    create_game_board(game_info->game_board, game_info->line);
    while (game_finish(game_info->game_board, game_info->line) == 0) {
        if (player_turn(game_info) == -777)
            return 0;
        if (game_finish(game_info->game_board, game_info->line) == 1) {
            print_game_board_end(game_info->game_board, game_info->line);
            my_putstr("You lost, too bad...\n");
            return 2;
        } else {
            ai_turn(game_info, ai_info);
        }
    }
    print_game_board_end(game_info->game_board, game_info->line);
    my_putstr("I lost... snif... but I'll get you next time!!\n");
    return 1;
}