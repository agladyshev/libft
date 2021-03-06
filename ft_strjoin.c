/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:55:20 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/06 20:14:01 by stiffiny         ###   ########.fr       */
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
	if (s1 == 0 || s2 == 0)
		return (0);
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
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = 0;
	return (p);
}
