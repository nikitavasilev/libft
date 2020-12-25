#include <stdio.h>
#include "../includes/libft.h"

char	ft_to_lowercase(unsigned int index, char c)
{
	(void)index;
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	main(void)
{
	char *str = "HELLO";
	char *ret;

	ret = ft_strmapi(str, ft_to_lowercase);
	printf("%s\n", ret);
	free(ret);
	return (0);
}
