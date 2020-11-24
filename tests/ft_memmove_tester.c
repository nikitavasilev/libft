#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *src = "jàmbon";
	char dst[10];

	memmove(dst, src, 3);
	printf("%s\n", dst);
	return (0);
}
