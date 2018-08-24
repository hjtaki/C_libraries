/* ********************************************** */
/*                                                */
/* vc_strtrim.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

static int len(char const *str)
{
    int counter = 0;
    while (*str)
    {
        counter++;
        str++;
    }
    return counter;
}

static int begin_space(char const *arr)
{
    int counter;

    for (int i = 0; i < len(arr); i++)
    {
        if (!(arr[i] == ' ' || arr[i] == '\n' || arr[i] == '\t'))
        {
            break;
        }
        counter++;
    }
    return counter;
}

static int end_space(char const *arr)
{
    int counter;

    for (int i = len(arr); i > 0; i--)
    {
        if (!(arr[i] == ' ' || arr[i] == '\n' || arr[i] == '\t'))
        {
            break;
            counter++;
        }
    }
    return counter;
}

char *vc_strtrim(char const *s)
{
    int length = strlen(s);
    char *arr = (char *)malloc(sizeof(arr) * length);
    int i;
    int j = 0;

    if (s == NULL)
    {
        return NULL;
    }

    arr = (char *)s;

    if (arr == NULL)
    {
        return NULL;
    }

    for (i = begin_space(s); i < length - end_space(s); i++)
    {
        arr[j] = s[i];
        j++;
    }

    return arr;
}