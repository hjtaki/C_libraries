/* ********************************************** */
/*                                                */
/* vc_strcat.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

char *vc_strcat(char *dest, char *src)
{
    char *dst = dest;

    while (*dest!= '\0')
        dest++;

    while ((*dest++ = *src++) != '\0') {}

    return dst;
}