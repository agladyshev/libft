/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 11:38:05 by stiffiny          #+#    #+#             */
/*   Updated: 2021/06/30 14:32:19 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;
	size_t	i;

	i = 0;
	p = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	p = malloc(len + 1);
	if (p == 0)
		return (0);
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
