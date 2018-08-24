<<<<<<< HEAD
/* ********************************************** */
/*                                                */
/* vc_memalloc.c                                  */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

static void vc_bzero(void *s, size_t n)
{
    char *c = s;
    size_t i;

    for (i = 0; i < n; ++i)
    {
        c[i] = '\0';
    }
}
=======
/* ************************************************ */
/*                                                  */
/* vc_memalloc.c                                      */
/*                                                  */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako   */
/*                                                  */
/* ************************************************ */

#include <stdio.h>
#include <stdlib.h>

>>>>>>> f6acc42da332f51fc24f168c1acfcadc92e88a35

void *vc_memalloc(size_t size)
{
    void *fresh = "fresh";

    if (size == 0)
        return (NULL);
    if ((fresh == (void *)malloc(size)) == NULL)
    {
        return (fresh);
    }
}

<<<<<<< HEAD
    vc_bzero(fresh, size);
    return (fresh);
}
=======
int main()
{
    int size = 50;
    vc_memalloc(size);
}
>>>>>>> f6acc42da332f51fc24f168c1acfcadc92e88a35
