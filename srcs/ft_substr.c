/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:46:27 by nvasilev          #+#    #+#             */
/*   Updated: 2022/07/18 00:05:49 by nvasilev         ###   ########.fr       */
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
	s_len = ft_strlen(s);
	if (start > s_len)
		s_len = 0;
	if (s_len > len)
		s_len = len;
	str = malloc(s_len + 1);
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
