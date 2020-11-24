#include "../includes/libft.h"
#include <stdio.h>

int		main(void)
{
	printf("Real: %d\n", isascii(-1));
	printf("Fake: %d\n", ft_isascii(-1));
	return (0);
}
