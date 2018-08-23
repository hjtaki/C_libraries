/*                                          	  */
/* vc_strdel.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *vc_strtrim(char const *s)
{
    int length = sizeof(s);
    char *arr = malloc(sizeof(char)*(length));

    while(*arr)
    {
        if(arr == NULL)
        {
            return NULL;
        }

        if(arr[0] == ' ' || arr[0] == '\n' || arr[0] == '\t' || 
        arr[length-1] == ' ' || arr[length-1] == '\n' || arr[length-1] == '\t')
        {
            arr++;
            length++;
            return arr;
        }
        free(arr);
    }
    return arr;
}


int main(int argc, char const *argv[])
{
    char a[100] = " asdfghjk ";
    char b[100] = "asdfghjk";
    
    printf("%s\n", vc_strtrim(a));
    printf("%s\n", vc_strtrim(b));
    return 0;
}
