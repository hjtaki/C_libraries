/* ********************************************** */
/*                                                */
/* vc_memdel.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

void vc_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}