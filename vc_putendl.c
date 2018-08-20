//14 ok
#include <unistd.h>

void vc_putendl(char *s)
{
    int i;

    i = 0;
    while (*s++ != '\0')
        i++;

    write(1, s, i);
}

int main(int argc, char const *argv[])
{
    char input[] = "abc\n";
    vc_putendl(input);
    /* code */
    return 0;
}
