/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:56:28 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/30 16:25:10 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_iter(t_list *lst, void *(*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*begin;

	ft_iter(lst, f);
	cur = 0;
	begin = 0;
	while (lst)
	{
		if (cur == 0)
		{
			cur = ft_lstnew(lst->content);
			begin = cur;
		}
		else
		{
			cur->next = ft_lstnew(lst->content);
			cur = cur->next;
		}
		lst = lst->next;
		if (cur == 0)
			ft_lstclear(&begin, del);
		if (cur == 0)
			lst = 0;
	}
	return (begin);
}
