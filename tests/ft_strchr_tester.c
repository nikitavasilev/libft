#include "../includes/libft.h"
#include <stdio.h>

int		main(void)
{
	int		c;
	char	*str;

	c = '\0';
	str = "lkfsdfgdof";
	printf("real one: %s\n", strchr(str, c));
	printf("mine: %s\n", ft_strchr(str, c));
	return (0);
}
