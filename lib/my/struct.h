/*
** EPITECH PROJECT, 2020
** Matchstick
** File description:
** struct.h
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct game_info_s {
    int line;
    int max_matches;
    char **game_board;
} game_info_t;

typedef struct ai_info_s {
    int biggest_line_size;
    int biggest_line;
    int line_choice;
    int matches_choice;
} ai_info_t;

#endif /* !STRUCT_H */
