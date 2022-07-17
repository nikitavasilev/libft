/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 17:41:42 by nvasilev          #+#    #+#             */
/*   Updated: 2022/07/18 00:04:03 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	occ;

	occ = 0;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			occ = 1;
		s++;
	}
	while ((unsigned char)*s != (unsigned char)c && occ)
		s--;
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
