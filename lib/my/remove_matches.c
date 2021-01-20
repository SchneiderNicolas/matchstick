/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** remove_matches
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int remove_matches(game_info_t *game_info, ai_info_t *ai_info, int nim_sum)
{
    int nb_matches;
    for (int i = 1; i < game_info->line + 1; i++) {
        nb_matches = count_matches(game_info->game_board, i);
        if ((nb_matches ^ nim_sum) < nb_matches) {
            ai_info->line_choice = i;
            ai_info->matches_choice = nb_matches - (nb_matches ^ nim_sum);
            return 1;
        }
    }
    return 0;
}

int remove_one_matche(game_info_t *game_info, ai_info_t *ai_info)
{
    int nb_matches;
    for (int i = 1; i < game_info->line + 1; i++) {
        nb_matches = count_matches(game_info->game_board, i);
        if (nb_matches > 0) {
            ai_info->line_choice = i;
            ai_info->matches_choice = 1;
            return 1;
        }
    }
    return 0;
}