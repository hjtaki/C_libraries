/* ********************************************** */
/*                                          	  */
/* vc_striter.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

static void vc_putnbr(char *a)
{
    printf("%s", a);
}

void vc_striter(char *s, void (*f)(char *))
{
    int i = 0;

    while(*s)
    {
        (*f)(&s[i]);
        i++;
        s++;

    }
    return ;
}