#include <stdio.h>

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_isalnum(int c);

int		main(void)
{
	printf("%d\n", ft_isalnum('&'));
	return (0);
}
