/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:46:27 by nvasilev          #+#    #+#             */
/*   Updated: 2022/07/18 04:34:12 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = strlen(s);
	if (s_len < len)
		len = s_len - start;
	if (len < 0)
		return (NULL);
	str = malloc(len + 1);
	printf("%zu\n", len + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (s_len)
	{
		while (s[start] && i < len)
			str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
