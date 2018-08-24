/* ********************************************** */
/*                                          	  */
/* vc_strdel.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

void vc_strdel(char **as)
{
    if (as && *as)
    {
        free(*as);
        *as = NULL;
    }
}