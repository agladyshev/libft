/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 20:40:06 by stiffiny          #+#    #+#             */
/*   Updated: 2021/04/25 17:04:37 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str, char c)
{
	int	i;
	int	new_word;
	int	count;

	count = 0;
	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (str[i] == c)
		{
			new_word = 1;
		}
		else if (new_word)
		{
			new_word = 0;
			count++;
		}
		i++;
	}
	return (count);
}

char	*get_word_at_i(char *str, char c, int *i)
{
	int		len;
	int		new_word;
	int		j;
	char	*ptr;

	len = 0;
	new_word = 1;
	j = 0;
	while (str[*i] != '\0')
	{
		new_word = (str[*i] == c) ? 1 : 0;
		len = (str[*i] == c) ? len : len + 1;
		if (new_word && len)
			break ;
		*i = *i + 1;
	}
	ptr = malloc(sizeof(char) * len + 1);
	while (j < len)
	{
		ptr[j] = str[*i - len + j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	**ft_split(char *str, char c)
{
	int		count;
	char	**arr;
	int		j;
	int		i;

	arr = 0;
	count = count_words(str, c);
	arr = malloc(sizeof(str) * count + 1);
	arr[count] = 0;
	j = 0;
	i = 0;
	while (j < count)
	{
		arr[j] = get_word_at_i(str, c, &i);
		if (arr[j] == 0)
			return (0);
		j++;
	}
	return (arr);
}
