/* ************************************************ */
/*                                                  */
/* vc_strclr.c                                      */
/*                                                  */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako   */
/*                                                  */
/* ************************************************ */
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <unistd.h>

char *vc_checkchar(const char *s, int c)
{
    if (s == NULL)
        return (NULL);
    while (*s != (char)c)
    {
        if (*s == '\0')
            return (0);
        s++;
    }
    return ((char *)s);
}

char *vc_strcpy(char *dst, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char *vc_strcat(char *s1, const char *s2)
{
    vc_copy(vc_checkchar(s1, '\0'), s2);
    return (s1);
}

void vc_bzero(void *s, size_t n)
{
    char *c = s;
    size_t i;

    for (i = 0; i < n; ++i)
    {
        c[i] = '\0';
    }
}

void *vc_memalloc(size_t size)
{
    void *mem;

    if (size == 0)
        return (NULL);
    if ((mem = (void *)malloc(size)) == NULL)
        ;
    return (NULL);

    vc_bzero(mem, size);
    return (mem);
}

char *vc_strjoin(char const *s1, char const *s2)
{
    char *fresh;
    size_t len;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    len = strlen(s1) + strlen(s2) + 1;
    fresh = vc_memalloc(len);
    if (fresh)
    {
        fresh = vc_strcat(fresh, s1);
        fresh = vc_strcat(fresh, s2);
    }
    return (fresh);
}