/* ************************************************ */
/*                                                  */
/* vc_strclr.c                                      */
/*                                                  */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako   */
/*                                                  */
/* ************************************************ */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

int main()
{
    int size = 50;
    vc_memalloc(size);
}