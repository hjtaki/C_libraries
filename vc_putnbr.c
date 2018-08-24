/* ********************************************** */
/*                                                */
/* vc_putnbr.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

void vc_putnbr(int *n)
{
    write(1, n, sizeof(n));
    return;
}
