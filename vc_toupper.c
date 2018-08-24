/* ********************************************** */
/*                                                */
/* vc_toupper.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

char vc_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c = c + 'A' - 'a');
    }
    else
    {
        return c;
    }
}