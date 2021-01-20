/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** display_function
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

void ai_turn(game_info_t *game_info, ai_info_t *ai_info)
{
    print_game_board(game_info->game_board, game_info->line);
    my_putstr("AI's turn...\n");
    ai_choice(game_info, ai_info);
    my_putstr("AI removed ");
    my_putnbr(ai_info->matches_choice);
    my_putstr(" match(es) from line ");
    my_putnbr(ai_info->line_choice);
    my_putchar('\n');
    update_game_board(ai_info->line_choice, ai_info->matches_choice,
    game_info->game_board);
}

int player_turn(game_info_t *game_info)
{
    print_game_board(game_info->game_board, game_info->line);
    my_putstr("Your turn:\n");
    if (read_player_move_and_print(game_info) == -777)
        return -777;
}