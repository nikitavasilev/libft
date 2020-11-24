#include "../includes/libft.h"
#include <stdio.h>

char	*ft_itoa(int n);

int		main(void)
{
	char *res = ft_itoa(INT_MIN);
	printf("%s\n", res);
	free(res);
	return (0);
}
