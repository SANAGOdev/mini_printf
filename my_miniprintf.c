/*
** EPITECH PROJECT, 2022
** mini printf
** File description:
** mini printf
*/

#include <stdarg.h>
#include "includes/my.h"

int mini_printf(const char *format, ...)
{
    va_list list;

    va_start(list, format);

    for(int i = 0; i < my_strlen(format); i++) {

        if (format[i] == '%' && format[i + 1] == 'c') {
            my_putchar((char) va_arg(list, int));
        }
        if (format[i] == '%' && format[i + 1] == 's') {
            my_putstr(va_arg(list, char*));
        }
        if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i' )) {
            my_put_nbr(va_arg(list, int));
        }
        if (format[i] == '%' && format[i + 1] == '%') {
            my_putchar('%');
        }
        if (format[i] != '%') {
            my_putchar(format[i]);
        }
        else {
            i++;
        }
    }

    va_end(list);
}
