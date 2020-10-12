#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	char *str = "Hello";
	printf("%ld\n", ft_strlen(str));
	return (0);
}
