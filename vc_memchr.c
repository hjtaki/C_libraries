/* ********************************************** */
/*                                                */
/* vc_memchr.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *vc_memchr(const void *buffer, int ch, size_t count)
{
    int i;
    char c;
    char *s = buffer;

    for (i = 0; i < count; i++)
    {
        if (*s == ch)
        {

            return s;
        }
        else
            s++;
    }
}

/* MEMCHR */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *vc_memchr(const void *buffer, int ch, size_t count)
{
    int i;
    char c;
    char *s = buffer;

    for (i = 0; i < count; i++)
    {
        if (*s == ch)
        {
