/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:35:13 by nvasilev          #+#    #+#             */
/*   Updated: 2020/11/24 14:28:59 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_count_chars(unsigned int num)
{
	size_t i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

void	ft_heap_adder(char *str, unsigned int n, unsigned int i)
{
	static unsigned int j;

	j = i;
	if (n > 0)
	{
		ft_heap_adder(str, n / 10, j);
		str[j] = (n % 10) + '0';
		j++;
	}
	str[j] = '\0';
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	num;
	unsigned int	i;

	i = 0;
	num = n;
	if (n < 0)
	{
		num = n * -1;
		res = malloc(ft_count_chars(num) + 2);
	}
	else
		res = malloc(ft_count_chars(num) + 1);
	if (!res)
		return (0);
	if (n == 0)
	{
		res[i] = '0';
		res[i + 1] = '\0';
		i += 2;
	}
	else if (n < 0)
	{
		res[i] = '-';
		i++;
	}
	ft_heap_adder(res, num, i);
	return (res);
}
