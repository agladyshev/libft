/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:42:49 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/06 21:17:12 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	**begin;

	begin = lst;
	if (lst != 0)
	{
		while (*lst)
		{
			cur = *lst;
			(*del)((*lst)->content);
			(*lst) = (*lst)->next;
			cur->next = 0;
			free(cur);
		}
		*begin = 0;
	}
}
