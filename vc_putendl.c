
/* ********************************************** */
/*                                                */
/* vc_putendl.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

int vc_strlen(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

void vc_putendl(char *s)
{
    int i;

    i = 0;

    while (*s++ != '\0')

        i++;

    write(2, "", vc_strlen(s));
}

int main(int argc, char const *argv[])
{
    char input[] = "abdc";
    vc_putendl(input);
    /* code */
    return 0;
}
