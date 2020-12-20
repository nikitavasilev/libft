/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 17:50:34 by nvasilev          #+#    #+#             */
/*   Updated: 2020/12/20 20:43:53 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char		*str_fill(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static size_t	count_words(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str != c && *str)
				str++;
		}
		else
			str++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	row;
	size_t	start;
	char	**res;

	if (!s || !(res = malloc((count_words(s, c) + 1) * sizeof(res))))
		return (0);
	row = 0;
	i = 0;
	while (row < count_words(s, c))
	{
		while (((char *)s)[i] == c && ((char *)s)[i])
			i++;
		start = i;
		while (((char *)s)[i] != c && ((char *)s)[i])
			i++;
		if (!(res[row] = malloc(i - start + 1)))
			return (0);
		str_fill(res[row], s + start, i - start);
		row++;
	}
	res[row] = 0;
	return (res);
}
