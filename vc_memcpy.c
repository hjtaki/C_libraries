/* ********************************************** */
/*                                                */
/* vc_memcpy.c                                    */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void *vc_memcpy(void *dest, const void *src, size_t n)
{
	char *dp = dest;
	const char *sp = src;
	while (n--)
		*dp++ = *sp++;
	return dest;
}
