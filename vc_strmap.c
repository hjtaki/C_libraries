//7
#include <stdlib.h>

char *vc_strmap(char const *s, void (*f)(char))
{

    int len;

    len = 0;
    while (*s++ != '\0')
        len++;

    int i;
    i = 0;

    char *fresh;
    fresh = malloc(sizeof(int) * 4);

    while (i < len)
        f(s[i]);

    i++;

    return fresh;
}
