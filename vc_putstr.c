/* ************************************ */
/*                                      */
/* vc_putstr.c                           */
/*                                      */
/* By: Bianca, Giada, Minami            */
/*                                      */
/* ************************************ */
#include <stdio.h>

void vc_putstr(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        putchar(*(str + i));
        i++;
    }
}
