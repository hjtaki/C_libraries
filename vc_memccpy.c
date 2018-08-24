/* ********************************************** */
/*                                                */
/* vc_memccpy.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

void *vc_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((char *)src)[i] == c)
        {
            ((char *)dest)[i] = ((char *)src)[i];
            return (&((char *)dest)[i + 1]);
        }
        else
        {
            ((char *)dest)[i] = ((char *)src)[i];
            i++;
        }
    }
    return (0);
}