/*
** EPITECH PROJECT, 2022
** my putstr
** File description:
** my putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
