#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *src = "toto";
	char dst[20] = "";

	printf("%zu\n", ft_strlcat(dst, src, 0));
	printf("%s\n", dst);
	return (0);
}
