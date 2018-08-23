/*                                          	  */
/* vc_strdel.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vc_putnbr(char *a)
{
    // *a = "hello";
    printf("%s", a);
}


void vc_striter(char *s, void (*f)(char *))
{
    int i = 0;

    while(*s)
    {
        (*f)(&s[i]);
        i++;
        s++;

    }
    return ;
}


int main(int argc, char const *argv[])
{
    char *input = "abc";
    void (*p)(char*);
    p = &vc_putnbr;
    vc_striter(input, *p);
    return 0;
}
