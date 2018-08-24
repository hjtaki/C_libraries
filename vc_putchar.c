/* ********************************************** */
/*                                                */
/* vc_putchar.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

void vc_putchar(char c)
{
  write(1, &c, 1);
}