// 3 ok
#include <stdlib.h>

// Outputs the string s to the standard output followed by '\n'

char *vc_strnew(size_t size)
{
    char *str;
    if (size == 0)
    {
        return NULL;
    }
    else
    {
        str = (char *)malloc((4) * sizeof(char));
        str[4] = '\0';

        size_t i;
        i = 0;

        while (i < size + 1)
        {
            ((char *)str)[i] = '\0';
            i++;
        }

        return str;
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    vc_strnew(2);
    /* code */
    return 0;
}
