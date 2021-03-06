/* ************************************ */
/*                                      */
/* vc_strncpy.c                         */
/*                                      */
/* By: Marcelo, Chin, Giada             */
/*                                      */
/* ************************************ */

#include <stdio.h>
char *vc_strncpy(char *dest, char *src, unsigned int n)
{
    size_t i;

   for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';

   return dest;
}
