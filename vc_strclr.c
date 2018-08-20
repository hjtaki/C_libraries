/* ************************************ */
/*                                      */
/* vc_strclr.c                          */
/*                                      */
/* By: Alex, Gaida, Chin, Sue, Yukako   */
/*                                      */
/* ************************************ */

#include <stdlib.h>

void vc_strclr(char *s)
{
    if (s != NULL && *s != NULL)
        *s = '\0';
}