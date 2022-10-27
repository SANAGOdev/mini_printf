
/*
** EPITECH PROJECT, 2022
** my strlen
** File description:
** my strlen
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;
    if (str[i] == '\0') {
        return 0;
    }
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
