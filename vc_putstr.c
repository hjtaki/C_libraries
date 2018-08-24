/* ********************************************** */
/*                                                */
/* vc_putstr.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

void vc_putstr(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        putchar(*(str + i));
        i++;
    }
}