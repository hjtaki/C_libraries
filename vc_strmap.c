//7

#include <unistd.h>
#include <stdio.h>

char vc_putnbr(int a)
{
    printf("%d", a);
    a = 2 * a;
}

char *vc_strmap(char const *s, void (*f)(char))
{

    int len;

    len = 0;
    while (*s++ != '\0')
        len++;

    char *result;

    for (int i = 0; i < len; i++)
    {
        // result[i] = f(s[i]);
        result[len] = '\0';
        return result;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    char input[] = "abc\n";
    void (*p)(int);
    p = &vc_putnbr;
    vc_strmap(input, *p);
    /* code */
    return 0;
}
