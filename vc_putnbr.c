/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By: Alex, Gaida, Chin, Sue, Yukako   */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>

int vc_strlen(char *s)
{
    int i = 0;
    while (*(s + i) != '\0')
    {
        i++;
    }
    return i;
}

void vc_putnbr(int *n)
{
    write(1, n, sizeof(n));
    return;
}
