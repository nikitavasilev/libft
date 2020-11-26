#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *s1 = "Hello fam";
	char *s2 = "Hello mam";

	printf("%d\n", ft_memcmp(s1, s2, 20));
	return (0);
}
