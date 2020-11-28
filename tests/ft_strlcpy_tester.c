#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *src = "What's up?";
	char dst[10];

	printf("%d\n", ft_strlcpy(dst, src, 10));
	printf("%s\n", dst);
	return (0);
}
