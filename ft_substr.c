/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:40:53 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/25 14:54:58 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	size;

	p = 0;
	size = ft_strlen(s) - start;
	if (len < size)
		size = len;
	p = malloc(size + 1);
	if (p == 0)
		return (0);
	p[size] = 0;
	while (size > 0)
	{
		p[size - 1] = s[size + start - 1];
		size--;
	}
	return (p);
}
