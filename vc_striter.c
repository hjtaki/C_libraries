/* ********************************************** */
/*                                          	  */
/* vc_striter.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

=======
>>>>>>> 25d859227382a2a5a8f8416424b53209389a66ea
=======
>>>>>>> f6acc42da332f51fc24f168c1acfcadc92e88a35
static void vc_putnbr(char *a)
{
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
<<<<<<< HEAD
<<<<<<< HEAD
}


// int main(int argc, char const *argv[])
// {
//     char *input = "abc";
//     void (*p)(char*);
//     p = &vc_putnbr;
//     vc_striter(input, *p);
//     return 0;
// }
=======
}
>>>>>>> 25d859227382a2a5a8f8416424b53209389a66ea
=======
}
>>>>>>> f6acc42da332f51fc24f168c1acfcadc92e88a35
