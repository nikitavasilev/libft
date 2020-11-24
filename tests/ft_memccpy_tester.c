#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *src = "Holà!";
	char dst[10];

	memccpy(dst, src, 't', 3);
	printf("%s\n", dst);
	//printf("%s\n", (char *)ft_memccpy(dst, src, 't', 3));
	return (0);
}
