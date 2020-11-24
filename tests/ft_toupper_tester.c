#include "../includes/libft.h"
#include <stdio.h>

int		main(void)
{
	printf("real one: %c\n", toupper('z' + 1));
	printf("mine: %c\n", ft_toupper('z' + 1));
	return (0);
}
