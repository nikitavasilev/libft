#include "../includes/libft.h"
#include <stdio.h>

int		main(void)
{
	char	str[50] = "This is string.h library function";
	int		c;
	size_t	n;

	c = '$';
	n = 55;
	printf("%s\n", str);
	ft_memset(str, c, n);
	//memset(str, c, n);
	printf("%s\n", str);
	return (0);
}
