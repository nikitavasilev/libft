#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *src = "Hello";
	char dest[10];

	//printf("%s\n", (char *)memcpy(dest, src, 6));
	printf("%s\n", (char *)ft_memcpy(dest, src, 6));
	return (0);
}
