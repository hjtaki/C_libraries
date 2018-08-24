/* ********************************************** */
/*                                                */
/* vc_isascii.c                                   */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */
#include "libvc.h"

int vc_isascii(int c)
{
    return c >= 0 && c < 128;
}