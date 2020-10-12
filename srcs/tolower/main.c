#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int c);

int		main(void)
{
	printf("real one: %c\n", tolower('Z'));
	printf("mine: %c\n", ft_tolower('Z'));
	return (0);
}
