#include <stdio.h>
#include "../includes/libft.h"

int	main(void)
{
	char *s1 = "Yo!";
	char *s2 = "What's up?";

	char *res = ft_strjoin(s1, s2);
	printf("%s\n", res);
	free(res);
	return (0);
}
