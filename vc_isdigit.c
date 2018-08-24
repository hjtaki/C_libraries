/* ********************************************** */
/*                                                */
/* vc_isdigit.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

int vc_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return c;
    } 
    else
    {
        return 0;
    }
}
