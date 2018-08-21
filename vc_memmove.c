/* MEMMOVE */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *vc_memmove(void *dest, void *source, size_t num)
{
  unsigned char *destc = (unsigned char *)dest;
  unsigned char *sourcec = (unsigned char *)source;
  for (; num > 0; --num)
  {
    destc[num - 1] = sourcec[num - 1];
  }
  return destc;
}
