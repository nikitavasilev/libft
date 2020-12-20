#include <stdio.h>
#include "../includes/libft.h"

int	main(void)
{
	char *s1 = "\tHello\t";
	char *set = "o\t";

	char *res = ft_strtrim(s1, set);
	printf("%s\n", res);
	free(res);
	return (0);
}
