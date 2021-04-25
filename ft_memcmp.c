/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:02:07 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/24 17:17:26 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1))
	{
		if (*((unsigned char *) s1 + i) != *((unsigned char *) s2 + i))
			return (*((unsigned char *) s1 + i) - *((unsigned char *) s2 + i));
		i++;
	}
	return (*((unsigned char *) s1 + i) - *((unsigned char *) s2 + i));
}
