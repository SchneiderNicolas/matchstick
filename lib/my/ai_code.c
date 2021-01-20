/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** ai_code.c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int norm(int nb_one_match_line, ai_info_t *ai_info)
{
    if (nb_one_match_line % 2 == 0) {
        ai_info->matches_choice = ai_info->biggest_line_size - 1;
        ai_info->line_choice = ai_info->biggest_line;
        return 1;
    } else {
        ai_info->matches_choice = ai_info->biggest_line_size;
        ai_info->line_choice = ai_info->biggest_line;
        return 1;
    }
    return 0;
}

void ai_choice(game_info_t *game_info,  ai_info_t *ai_info)
{
    int nim_sum;
    int nb_matches;
    biggest_line(game_info, ai_info);
    if (ai_info->biggest_line_size <= game_info->max_matches) {
        if (check_matches(game_info, ai_info) == 1)
            return;
        nim_sum = calc_nim_sum(game_info);
        if (nim_sum != 0 && remove_matches(game_info, ai_info, nim_sum) == 1)
            return;
        else if (remove_one_matche(game_info, ai_info) == 1)
            return;
    } else {
        ai_info->line_choice = ai_info->biggest_line;
        ai_info->matches_choice = 1;
    }
}

int check_matches(game_info_t *game_info, ai_info_t *ai_info)
{
    int nb_matches = 0;
    int nb_one_match_line = 0;
    int nb_multiple_matches_line = 0;
    for (int i = 1; i < game_info->line + 1; i++) {
        nb_matches = count_matches(game_info->game_board, i);
        if (nb_matches == 1 || nb_matches == 0) {
            nb_one_match_line += nb_matches;
        } else {
            nb_multiple_matches_line += 1;
        }
    }
    if (nb_multiple_matches_line == 1 && norm(nb_one_match_line, ai_info) == 1)
        return 1;
    else if (nb_multiple_matches_line == 0) {
            ai_info->matches_choice = 1;
            ai_info->line_choice = ai_info->biggest_line;
            return 1;
    }
    return 0;
}