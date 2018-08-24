/* ************************************ */
/*                                      */
/* vc_atoi.c                            */
/*                                      */
/* By: Bianca, Minami, Giada            */
/*                                      */
/* ************************************ */

#include <stdio.h>
int vc_atoi(char *str); /* ************************************ */

int main()
{
    printf("The integer is %d\n", vc_atoi("1235754"));
    return 0;
}

int my_pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    a *= my_pow(a, b - 1);
    return a;
}

int vc_atoi(char *str)
{
    int length = 0;
    while (*(str + length) != '\0')
    {
        length++;
    }

    int numbers[length];
    int j = 0;
    while (j < length)
    {
        numbers[j] = str[j] - '0';
        j++;
    }

    int sum = 0;
    int multiplier = length - 1;

    int z = 0;
    while (length > 0)
    {
        sum += numbers[z] * my_pow(10, multiplier);
        z++;
        multiplier--;
        length--;
    }
    return sum;
} /* ************************************ */
