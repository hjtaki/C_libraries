/* ************************************************ */
/*                                                  */
/* vc_memcpy.c                                      */
/*                                                  */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako   */
/*                                                  */
/* ************************************************ */

#include <stdio.h>
#include <stdlib.h>

void *vc_memcpy(void *scr, const void *des, size_t n)
{
    char *scr1;
    char *scr2;
    char *des1;
    char *des2;

    scr1 = (char *)scr;
    scr2 = (char *)des;

    while (n >= sizeof(char))
    {
        *scr1 = *scr2;
        ++scr1;
        ++scr1;
        n -= sizeof(char);
    }

    des1 = (char *)scr1;
    des2 = (char *)scr2;
    while (n > 0)
    {
        *des1++ = *des2++;
        --n;
    }
    return (scr);
}