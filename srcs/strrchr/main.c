#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int		main(void)
{
	int		c;
	char	*str;

	c = 'z';
	str = "lkfsdafgdaof";
	printf("real one: %s\n", strrchr(str, c));
	printf("mine: %s\n", ft_strrchr(str, c));
	return (0);
}
