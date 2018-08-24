/* ************************************ */
/*                                      */
/* vc_strlen.c.c                        */
/*                                      */
/* By: Chin, Giada, Rey                 */
/*                                      */
/* ************************************ */

#include <stdlib.h>
#include <string.h>

char *vc_strlen(char *src)
{
  char *str;
  char *p;
  size_t len = strlen(src);

  str = malloc(len + 1);
  if (str)
  {
    memcpy(str, src, len + 1);
  }
  return str;
}

int main()
{
  char original[12] = "Ooga Booga!";
  char *duplicate;
  int o_len, d_len;

  duplicate = vc_strlen(original);
  o_len = strlen(original);
  d_len = strlen(duplicate);

  printf("Original String: '%s' (%d)\n",
         original, o_len);
  printf("Duplicate string: '%s' (%d)\n",
         duplicate, d_len);

  return (0);
}