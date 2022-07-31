/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:05:22 by nvasilev          #+#    #+#             */
/*   Updated: 2022/07/31 18:20:39 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *dest, int val, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (n--)
		*ptr++ = val;
	return (dest);
}
