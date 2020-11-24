#include "../includes/libft.h"
#include <stdio.h>

int		main(void)
{
	char *str = "  	 	\t \n \r \v \f -2147483648a594\n";
	printf("atoi: %d\n", atoi(str));
	printf("ft_atoi: %d\n", ft_atoi(str));
	return (0);
}
