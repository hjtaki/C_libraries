/* ************************************ */
/*                                      */
/*  vc_strcat.c                         */
/*                                      */
/* By: Chin, Giada, Rey                 */
/*                                      */
/* ************************************ */

#include <string.h>
#include <stdio.h>

static char *vc_strcat(char *dest, char *src)
{
    char *dst = dest;

    while (*dest != '\0')
        dest++;

    while ((*dest++ = *src++) != '\0')
    {
    }

    return dst;
}

int main(int argc, char **argv)
{
    // char string1[25] = "C";
    char string1[25];
    char string2[] = " programming ";

    string1[0] = '\0';
    printf("strcat   : %s\n", strcat(string1, string2));
    string1[0] = '\0';
    printf("my_strcat: %s\n", vc_strcat(string1, string2));
}