/*                                          	  */
/* vc_strdel.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#include <stdio.h>
#include <stdlib.h>

void vc_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
	
}

