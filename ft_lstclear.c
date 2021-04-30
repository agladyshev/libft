/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:57:27 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/30 12:26:19 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	cur = 0;
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
		*lst = 0;
	}
	lst = 0;
}
