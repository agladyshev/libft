/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:09:40 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/05 14:50:47 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_int_size(int n)
{
	size_t			size;
	unsigned int	div;

	size = 0;
	if (n <= 0)
	{
		size++;
		div = (unsigned int)(-n);
	}
	else
		div = (unsigned int)n;
	while (div != 0)
	{
		div /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t			size;
	unsigned int	div;
	char			*s;

	size = get_int_size(n);
	s = malloc(size + 1);
	if (s == 0)
		return (0);
	s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		div = (unsigned int)(-n);
	}
	else
		div = (unsigned int)n;
	s[size] = 0;
	while (div != 0)
	{
		s[size - 1] = div % 10 + 48;
		div /= 10;
		size--;
	}
	return (s);
}
