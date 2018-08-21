/* MEMMOVE */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* vc_memmove(void* dest, void* source, size_t num)
{
  unsigned char* destc = (unsigned char*)dest;
  unsigned char* sourcec = (unsigned char*)source;
  for ( ; num > 0; --num )
  {
    destc[num-1] = sourcec[num-1];
  }
  return destc;
}

int main()
{
  char* str = (char*)malloc(100);
  memset(str, 0, 100);
  strcpy(str, "memmove can be very useful......");
  vc_memmove(str+20, str+15, 11);
  puts(str);
  free(str);
  return 0;
}

