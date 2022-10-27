/*
** EPITECH PROJECT, 2022
** my putchar
** File description:
** my putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
