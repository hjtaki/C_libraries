#include <stdio.h>
#include <string.h>

char *vc_strrchr(const char *s, int c)
{
    char *ret = 0;
    do
    {
        if (*s == (char)c)
            ret = s;
    } while (*s++);
    return ret;
}