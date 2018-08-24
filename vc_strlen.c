/* ********************************************** */
/*                                                */
/* vc_strlen.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

int vc_strlen(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return i;
}