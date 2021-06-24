/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 10:16:37 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/06 21:14:22 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			arr_size;
	size_t			cur;
	void				*p;

	arr_size = 0;
	cur = 0;
	p = 0;
	while (nmemb > 0)
	{
		cur += size;
		if (cur < arr_size)
			return (0);
		arr_size = cur;
		nmemb--;
	}
	p = malloc(arr_size);
	while (p != 0 && arr_size > 0)
	{
		*(char *)(p + arr_size - 1) = 0;
		arr_size--;
	}
	return (p);
}
