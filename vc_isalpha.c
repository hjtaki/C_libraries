/* ********************************************** */
/*                                                */
/* vc_isalpha.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

int vc_isalpha(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (!((str[i] >= 'A' && str[i] <= 'Z') \
          || (str[i] >= 'a' && str[i] <= 'z')))
      return 0;
    i++;
  }
  return 1;
}
