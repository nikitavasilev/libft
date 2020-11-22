#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int n);

int		main(void)
{
	char *res = ft_itoa(INT_MIN);
	printf("%s\n", res);
	free(res);
	return (0);
}
