#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c);

int		main(void)
{
	printf("real one: %d\n", isprint(128));
	printf("mine: %d\n", ft_isprint(128));
	return (0);
}
