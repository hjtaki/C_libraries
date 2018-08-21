/* MEMSET */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void vc_memset(void *ptr, int value, int size)
{
    if(ptr != NULL && size > 0)
    {
        unsigned char *temp = ptr;
        int i = 0;

        for( i = 0; i < size; i++)
        {
            *temp++ = (unsigned char)value;
        }
    }

}

int main()

{
    char *ptr = NULL;
    char *ptr1 = NULL;
    ptr = (char *)malloc(8);
    ptr1 = (char*)malloc(8);

    printf("ptr after memset\n");

    vc_memset(ptr,'A',sizeof(ptr));

    puts(ptr);
    printf("ptr1 after memset\n");

    vc_memset(ptr1,'C',sizeof(ptr1));

    puts(ptr1);
    free(ptr);
    free(ptr1);

    return 0;

}