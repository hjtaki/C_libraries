/* ********************************************** */
/*                                                */
/* vc_strnstr.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

char *vc_strnstr(const char *s1, const char *s2, size_t n)
{
    int i;
    int j;
    j = 0;
    i = 0;
    if (strcmp(s2, "") == NULL)
        return ((char *)s1);
    while (s1[i] && i < n)
    {
        if (s1[i] == s2[j])
            j++;
        else
            j = 0;
        if (s2[j] == '\0')
            return ((char *)s1 + (i - (j - 1)));
        i++;
    }
    return (0);
}