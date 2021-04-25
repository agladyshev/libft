/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:11:02 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/24 11:44:01 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j != size - i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (src[j] != '\0')
	{
		dst[i + j] = src[j];
		while (src[j] != '\0')
			j++;
	}
	else
	{
		dst[i + j] = '\0';
	}
	return (i + j);
}
