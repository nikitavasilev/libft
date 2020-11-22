#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main(void)
{
	char *src = "Hello";
	char dest[10];

	//printf("%s\n", (char *)memcpy(dest, src, 6));
	printf("%s\n", (char *)ft_memcpy(dest, src, 6));
	return (0);
}
