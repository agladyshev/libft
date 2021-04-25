/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:55:20 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/25 17:03:02 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (p == 0)
		return (0);
	while (s1[j] != 0)
	{
		p[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = 0;
	return (p);
}
