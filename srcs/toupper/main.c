#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int c);

int		main(void)
{
	printf("real one: %c\n", toupper('z' + 1));
	printf("mine: %c\n", ft_toupper('z' + 1));
	return (0);
}
