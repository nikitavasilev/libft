#include <stdio.h>
#include "../includes/libft.h"

int	main(void)
{
	char *init = "start of the substring.";

	printf("%s\n", init);
	char *sub = ft_substr(init, 4, 20);
	printf("%s\n", sub);
	free(sub);
	return (0);
}
