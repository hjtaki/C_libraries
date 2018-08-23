/* ************************************ */
/*                                      */
/* vc_strcpy.c                          */
/*                                      */
/* By: Marcelo, Chin, Giada             */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strcpy(char *dst, char *src) 
{
    int i;
    i = 0;
    while (src[i] != '\0') 
    {
        dst[i] = src[i];
        i++;
    }
return dst;
}

int main()
    {
    char src[100], dest[100], i;
    printf("Enter string Src: ");
    scanf("%s",src);
    for(i=0; src[i]!='\0'; ++i)
        {
        dest[i]=src[i];
        }
    dest[i]='\0';
    printf("String Dest: %s",dest);
    return 0;
    }