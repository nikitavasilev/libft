/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:42:47 by nvasilev          #+#    #+#             */
/*   Updated: 2022/07/17 23:09:50 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newcell;
	t_list	*res;

	if (!lst)
		return (0);
	res = ft_lstnew(f(lst->content));
	if (!res)
	{
		del(lst->content);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		newcell = ft_lstnew(f(lst->content));
		if (!newcell)
		{
			del(lst->content);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, newcell);
		lst = lst->next;
	}
	return (res);
}
