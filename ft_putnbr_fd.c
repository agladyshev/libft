/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:03:23 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/03 10:35:48 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	div;
	char			c;

	div = (n < 0) ? (unsigned int)(-n) : (unsigned int)n;
	if (n < 0)
		write(fd, "-", 1);
	c = (div % 10) + 48;
	if (div / 10 != 0)
	{
		div /= 10;
		ft_putnbr_fd(div, fd);
	}
	write(fd, &c, 1);
}
