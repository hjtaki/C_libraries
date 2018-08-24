/* ********************************************** */
/*                                                */
/* vc_strnew.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

char *vc_strnew(size_t size)
{
    char *str;
    if (size == 0)
    {
        return NULL;
    }
    else
    {
        str = (char *)malloc((4) * sizeof(char));
        str[4] = '\0';

        size_t i;
        i = 0;

        while (i < size + 1)
        {
            ((char *)str)[i] = '\0';
            i++;
        }

        return str;
    }
    return NULL;
}