/* ********************************************** */
/*                                                */
/* vc_strncat.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

char *vc_strncat(char *dest, char *src, int n)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while ((j < n) && src[j])
  {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
  return dest;
}