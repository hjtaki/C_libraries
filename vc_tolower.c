/* ********************************************** */
/*                                                */
/* vc_tolower.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

int vc_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c = c + 'a' - 'A');
    }
    else
    {
        return c;
    }
}
