#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c);

int		main(void)
{
	printf("Real: %d\n", isascii(-1));
	printf("Fake: %d\n", ft_isascii(-1));
	return (0);
}
