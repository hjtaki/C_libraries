/* ************************************ */
/*                                      */
/* vc_strlen.c                          */
/*                                      */
/* By: Bianca, Giada, Minami            */
/*                                      */
/* ************************************ */

#include <stdio.h>

static int vc_strlen(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return i;
}