/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:07:18 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/25 17:06:27 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_set(char const *set, char c)
{
	int i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	int		i;
	char	*p;

	start = 0;
	i = 0;
	while (is_in_set(set, s1[start]) && s1[start] != 0)
		start++;
	len = ft_strlen(s1) - start;
	while (is_in_set(set, s1[start + len - 1]) && len != 0)
		len--;
	p = malloc(len + 1);
	if (p == 0)
		return (0);
	while (i < len)
	{
		p[i] = s1[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}
