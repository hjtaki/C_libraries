/* ********************************************** */
/*                                                */
/* vc_memset.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vc_memset(void *ptr, int value, int size)
{
    if (ptr != NULL && size > 0)
    {
        unsigned char *temp = ptr;
        int i = 0;

        for (i = 0; i < size; i++)
        {
            *temp++ = (unsigned char)value;
        }
    }
}
