/* ********************************************** */
/*                                                */
/* vc_itoa.c                                      */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

static long int vc_abs(long int n)
{
    return ((n < 0) ? -n : n);
}

static int vc_len(long int n)
{
    int len;

    len = (n <= 0) ? 1 : 0;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char *vc_itoa(int n)
{
    int len;
    int sign;
    char *c;

    sign = (n < 0) ? -1 : 1;
    len = vc_len(n);
    c = (char *)malloc(sizeof(char) * len + 1);
    c[len] = '\0';
    len--;
    while (len >= 0)
    {
        c[len] = '0' + vc_abs(n % 10);
        n = vc_abs(n / 10);
        len--;
    }
    if (sign == -1)
        c[0] = '-';
    return (c);
}