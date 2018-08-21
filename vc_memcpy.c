/* MEMCOPY */

#include <stdio.h>
#include <string.h>

void vc_memcpy(void *dest, void *src, size_t n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (int i = 0; i < n; i++)
		cdest[i] = csrc[i];
}

int main()
{
	char csrc[] = "FinalProject";
	char cdest[100];
	vc_memcpy(cdest, csrc, strlen(csrc) + 1);
	printf("Copied string is %s", cdest);

	int isrc[] = {10, 20, 30, 40, 50};
	int n = sizeof(isrc) / sizeof(isrc[0]);
	int idest[n], i;
	vc_memcpy(idest, isrc, sizeof(isrc));
	printf("\nCopied array is ");
	for (i = 0; i < n; i++)
		printf("%d ", idest[i]);
	return 0;
}
