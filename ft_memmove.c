/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:04:14 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/06 19:30:05 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == 0 && src == 0) || n == 0)
		return (dest);
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			*(char *)(dest + n - 1) = *(char *)(src + n - 1);
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
