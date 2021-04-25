/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:09:40 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/25 18:52:04 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t			size;
	unsigned int	div;
	char			*s;

	div = (n < 0) ? (unsigned int)(-n) : (unsigned int)n;
	size = 0;
	while (div != 0)
	{
		div /= 10;
		size++;
	}
	size = (n < 0 || n == 0) ? size + 1 : size;
	s = malloc(size + 1);
	if (s == 0)
		return (0);
	s[0] = (n < 0) ? '-' : '0';
	s[size] = 0;
	div = (n < 0) ? (unsigned int)(-n) : (unsigned int)n;
	while (div != 0)
	{
		s[size - 1] = div % 10 + 48;
		div /= 10;
		size--;
	}
	return (s);
}
