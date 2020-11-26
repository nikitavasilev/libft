#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *str = "Holà que tàl?";
	int c = 'o';
	printf("%s\n", (unsigned char *)ft_memchr(str, c, 8));
	return (0);
}
