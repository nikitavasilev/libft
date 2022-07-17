#include <stdio.h>
#include "../includes/libft.h"

int	main(void)
{
	char *str = "0123456789";

	printf("%s\n", str);
	char *sub = ft_substr(str, 9, 10);
	printf("%s\n", sub);
	free(sub);
	return (0);
}
