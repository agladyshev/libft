/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:04:14 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/05 11:27:12 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == 0 && src == 0) || n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
