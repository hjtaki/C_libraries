/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By: Alex, Gaida, Chin, Sue, Yukako   */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>

void vc_putnbr(int *n)
{
    write(1, n, sizeof(n));
    return;
}
