/* ************************************ */
/*                                      */
/* vc_str_is_alpha.c                    */
/*                                      */
/* By: Chin, Giada, Rey                 */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vc_str_is_alpha(char *str)
{
    int i;
    for (i = 0; i < strlen(str); ++i)
    {
        if (isdigit(str[i]) && str[i] != '\0')
        {
            return 0;
        }
    }
    return 1;
}