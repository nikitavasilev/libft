#include "../includes/libft.h"
#include <stdio.h>

int		main(void)
{
	char	str[50] = "This is strings.h library function";

	printf("%s\n", str);
	//ft_bzero(str + 2, 10);
	bzero(str + 2, 10);
	printf("%s\n", str);
	return (0);
}
