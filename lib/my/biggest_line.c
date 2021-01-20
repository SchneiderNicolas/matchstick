/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** biggest_line
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"
#include "struct.h"

void biggest_line(game_info_t *game_info, ai_info_t *ai_info)
{
    int count = 0;
    ai_info->biggest_line_size = 0;
    for (int i = 1; i < game_info->line + 1; i++) {
        for (int j = 0; game_info->game_board[i][j]; j++) {
            if (game_info->game_board[i][j] == '|')
                count += 1;
        }
        if (count > ai_info->biggest_line_size) {
            ai_info->biggest_line_size = count;
            ai_info->biggest_line = i;
            count = 0;
        } else {
            count = 0;
        }
    }
}