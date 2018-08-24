#include <stdio.h>
#include <string.h>

static char *vc_strrchr(const char *s, int c)
{
    const char *ret = NULL;

    do
    {
        if (*s == c)
        {
            ret = s;
        }
    } while (*s++);
    return (char *)ret;
}
