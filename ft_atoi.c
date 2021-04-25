/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:25:54 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/25 17:30:04 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		ft_isspace(int c)
{
	if (c == '\f' || c == '\n' ||
		c == '\r' || c == '\t' ||
		c == '\v' || c == 32)
		return (1);
	return (0);
}

static	int		ft_isnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int				ft_atoi(const char *nptr)
{
	int	i;
	int	is_negative;
	int	num;

	num = 0;
	is_negative = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	while (ft_isnum(nptr[i]))
	{
		num = num * 10 + (nptr[i] - 48);
		i++;
	}
	if (is_negative)
		num *= -1;
	return (num);
}
