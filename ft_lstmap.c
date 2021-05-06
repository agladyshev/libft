/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:43:29 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/05 14:31:55 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*begin;

	begin = 0;
	if (lst == 0 || f == 0)
		return (0);
	while (lst)
	{
		cur = ft_lstnew(f(lst->content));
		if (cur == 0)
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		ft_lstadd_back(&begin, cur);
		lst = lst->next;
	}
	return (begin);
}
