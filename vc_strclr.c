/* ********************************************** */
/*                                          	  */
/* vc_strclr.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

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