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

<<<<<<< HEAD
<<<<<<< HEAD
int begin_space(char const *arr){
    int counter = 0;
=======
=======
>>>>>>> f6acc42da332f51fc24f168c1acfcadc92e88a35
static int begin_space(char const *arr)
{
    int counter;
>>>>>>> 25d859227382a2a5a8f8416424b53209389a66ea

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

<<<<<<< HEAD
<<<<<<< HEAD
int end_space(char const *arr){
    int counter = 0;
=======
=======
>>>>>>> f6acc42da332f51fc24f168c1acfcadc92e88a35
static int end_space(char const *arr)
{
    int counter;
>>>>>>> 25d859227382a2a5a8f8416424b53209389a66ea

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
<<<<<<< HEAD
<<<<<<< HEAD
}

// int main(int argc, char const *argv[])
// {
//     char a[100] = " asdf ghjk "; // "asdf ghjk"    
//     char b[100] = "  asdf ghjk "; // "asdf ghjk"
//     char c[100] = "   asdf   ghjk"; // "asdf ghjk"
//     char d[100] = "asdfghjk    "; // "asdfghjk"
//     char e[100] = "a  sd fghjk   "; // "a sd fghjk"
//     char f[100] = " "; // "a sd fghjk"
    
//     printf("a: %s\n", vc_strtrim(a));
//     printf("b: %s\n", vc_strtrim(b));
//     printf("c: %s\n", vc_strtrim(c));
//     printf("d: %s\n", vc_strtrim(d));
//     printf("e: %s\n", vc_strtrim(e));
//     printf("f: %s\n", vc_strtrim(f));
//     return 0;
// }
=======
}
>>>>>>> 25d859227382a2a5a8f8416424b53209389a66ea
=======
}
>>>>>>> f6acc42da332f51fc24f168c1acfcadc92e88a35
