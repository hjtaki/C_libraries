/* ************************************ */
/*                                      */
/*   vc_strncat.c                       */
/*                                      */
/* By: Chin, Giada, Rey                 */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strncat(char *dest, char *src, int n)
{
    if (n != 0)
    {
        char *d = dest;
        const char *s = src;

        while (*d != 0)
            d++;
        {
            if ((*d = *s++) == 0)
                break;
            d++;
        }
        while (--n != 0)
            ;

        *d = 0;
    }

    return dest;
}
