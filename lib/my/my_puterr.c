/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** my_puterror
*/

#include "my.h"
#include <unistd.h>

void my_puterr(char const *str)
{
    write(2, str, my_strlen(str));
}