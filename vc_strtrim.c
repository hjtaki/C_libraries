/*                                          	  */
/* vc_strtrim                                     */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char const *str) {
    int counter = 0;
    while(*str)
    {
        counter++;
        str++;
    }
    return counter;
}

int begin_space(char const *arr){
    int counter;

    for(int i = 0; i < len(arr); i++)
    {
        if(!(arr[i] == ' '|| arr[i] == '\n'|| arr[i] == '\t'))
        {
            break;
        }
        counter++;
    }
    return counter;
}

int end_space(char const *arr){
    int counter;

    for(int i = len(arr); i > 0; i--)
    {
        if(!(arr[i] == ' '|| arr[i] == '\n'|| arr[i] == '\t'))
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

    if(s == NULL)
    {
        return NULL;
    }

    arr = (char *) s;

    if(arr == NULL)
    {
        return NULL;
    }

    for(i = begin_space(s); i < length - end_space(s); i++)
    {
        arr[j] = s[i];
        j++;
    }

    return arr;
}

int main(int argc, char const *argv[])
{
    char a[100] = " asdf ghjk "; // "asdf ghjk"    
    char b[100] = "  asdf ghjk "; // "asdf ghjk"
    char c[100] = "   asdf   ghjk"; // "asdf ghjk"
    char d[100] = "asdfghjk    "; // "asdfghjk"
    char e[100] = "a  sd fghjk   "; // "a sd fghjk"
    char f[100] = " "; // "a sd fghjk"
    
    printf("a: %s\n", vc_strtrim(a));
    printf("b: %s\n", vc_strtrim(b));
    printf("c: %s\n", vc_strtrim(c));
    printf("d: %s\n", vc_strtrim(d));
    printf("e: %s\n", vc_strtrim(e));
    printf("f: %s\n", vc_strtrim(f));
    return 0;
}
