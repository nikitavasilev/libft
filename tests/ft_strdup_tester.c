#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *s1 = "Hello fam";
	char *s2 = ft_strdup(s1);

	printf("%s\n", s2);
	free(s2);
	return (0);
}
