/*                                          	  */
/* vc_strdel.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#include <stdio.h>
#include <unistd.h>

void vc_putchar(char c)
{
  write(1, &c, 1);
}


int main(int argc, char const *argv[])
{
    vc_putchar('s');
    return 0;
}
