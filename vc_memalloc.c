/* ************************************************ */
/*                                                  */
/* vc_strclr.c                                      */
/*                                                  */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako   */
/*                                                  */
/* ************************************************ */

#include <stdio.h>
#include <stdlib.h>

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
