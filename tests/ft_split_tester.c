#include <stdio.h>
#include "../includes/libft.h"

int	main(void)
{
	char *str = "                  olol";
	char sep = ' ';
	size_t i = 0;

	char **res = ft_split(str, sep);

	while (res[i])
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
