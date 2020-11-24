#include "../includes/libft.h"
#include <stdio.h>

int main(void)
{
	char *arr;
	arr = ft_calloc(0, 2);
	printf("%ld\n", sizeof(arr[0]));
	printf("%s\n", arr);
	free(arr);
	return (0);
}
