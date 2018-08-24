/* ********************************************** */
/*                                                */
/* vc_strcpy.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

char *vc_strcpy(char *dst, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0') 
    {
        dst[i] = src[i];
        i++;
    }
return dst;
}