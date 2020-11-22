/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:43:33 by nvasilev          #+#    #+#             */
/*   Updated: 2020/11/22 17:23:20 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
		if ((unsigned char)s[i - 1] == (unsigned char)c)
			return (&d[i]);
	}
	return (0);
}
