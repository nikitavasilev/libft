#include "../includes/libft.h"
#include <stdio.h>

int		main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "abcdf";
	s2 = "abcdé";
	n = 5;
	printf("real one: %d\n", strncmp(s1, s2, n));
	printf("mine: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}
