/* ********************************************** */
/*                                                */
/* vc_strrchr.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

char *vc_strrchr(const char *s, int c)
{
    char *ret = 0;
    do
    {
        if (*s == (char)c)
            ret = s;
    } while (*s++);
    return ret;
}