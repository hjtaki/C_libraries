/* ********************************************** */
/*                                                */
/* vc_isalnum.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

int vc_isalnum(int c)
{
    if (c >= '0' && c <= '9')
    {
        return c;
    }
    if (c >= 'a' && c <= 'z')
    {
        return c;
    }
    if (c >= 'A' && c <= 'Z')
    {
        return c;
    }
    else
    {
        return 0;
    }
}