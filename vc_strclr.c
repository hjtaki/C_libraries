/* ************************************ */
/*                                      */
/* vc_strclr.c                          */
/*                                      */
/* By: Alex, Gaida, Chin, Sue, Yukako   */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void vc_strclr(char *s)
{
    if (s != NULL)
    {
        int i;
        int n = (strlen(s) + 1);

        for (i = 0; i < n; ++i)
        {
            s[i] = '\0';
        }
        printf("%s", s);
    }
}
