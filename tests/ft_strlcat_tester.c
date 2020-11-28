#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *src = "What's up?";
	char dst[20] = " My man!";

	printf("%d\n", ft_strlcat(dst, src, 20));
	printf("%s\n", dst);
	return (0);
}
