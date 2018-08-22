#include <stdio.h>
#include <time.h>
#include <ctype.h>

int vc_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return c;
    } 
    else
    {
        return 0;
    }
}
