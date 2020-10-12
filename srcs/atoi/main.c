#include <stdio.h>
#include <stdlib.h>

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(const char *nptr);

int		main(void)
{
	char *str = "  	 	\t \n \r \v \f -2147483648a594\n";
	printf("atoi: %d\n", atoi(str));
	printf("ft_atoi: %d\n", ft_atoi(str));
	return (0);
}
