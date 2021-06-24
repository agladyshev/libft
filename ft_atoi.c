/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:25:54 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/06 16:32:24 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(int c)
{
	if (c == '\f' || c == '\n' || \
		c == '\r' || c == '\t' || \
		c == '\v' || c == 32)
		return (1);
	return (0);
}

static	int	ft_isnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			is_negative;
	long int	num;

	num = 0;
	is_negative = 1;
	i = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_negative = -1;
		nptr++;
	}
	while (ft_isnum(nptr[i]))
	{
		num = num * 10 + (*nptr++ - 48);
		if (num < 0 && is_negative == 1)
			return (-1);
		if (num < 0 && is_negative == -1)
			return (0);
	}
	num *= is_negative;
	return ((int)num);
}
