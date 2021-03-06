/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:11:10 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/04 18:00:12 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if (*s == (char)c)
		p = (char *)s;
	return (p);
}
