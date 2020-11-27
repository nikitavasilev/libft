#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *haystack = "melilimtlilime";
	char *needle = "tl";

	printf("%s\n", ft_strnstr(haystack, needle, 10));
	return (0);
}
