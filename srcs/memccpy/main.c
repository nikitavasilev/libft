#include <stdio.h>
#include <string.h>

void *ft_memccpy(void * dst, const void *src, int c, size_t n);

int main(void)
{
	char *src = "Holà!";
	char dst[10];

	memccpy(dst, src, 't', 3);
	printf("%s\n", dst);
	//printf("%s\n", (char *)ft_memccpy(dst, src, 't', 3));
	return (0);
}
