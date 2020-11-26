/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:43:34 by nvasilev          #+#    #+#             */
/*   Updated: 2020/11/26 16:04:22 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return (0);
	i = -1;
	while (++i < n)
	{
		if (!(((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
			break ;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
