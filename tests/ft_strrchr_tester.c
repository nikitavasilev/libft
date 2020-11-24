#include "../includes/libft.h"
#include <stdio.h>

int		main(void)
{
	int		c;
	char	*str;

	c = 'z';
	str = "lkfsdafgdaof";
	printf("real one: %s\n", strrchr(str, c));
	printf("mine: %s\n", ft_strrchr(str, c));
	return (0);
}
