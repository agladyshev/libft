/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stiffiny <stiffiny@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:44:26 by stiffiny          #+#    #+#             */
/*   Updated: 2021/05/05 15:00:53 by stiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char *str, char c)
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
			new_word = 1;
		else if (new_word)
		{
			new_word = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*strdup_len_at_i(char *str, int len, int i)
{
	char	*ptr;
	int		j;

	j = 0;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	while (j < len)
	{
		ptr[j] = str[i + j - len];
		j++;
	}
	ptr[len] = '\0';
	return (ptr);
}

static char	*get_word_at_i(char *str, char c, int *i)
{
	int		len;
	int		new_word;
	char	*ptr;

	len = 0;
	new_word = 1;
	while (str[(*i)] != '\0')
	{
		if (str[*i] == c)
			new_word = 1;
		else
		{
			new_word = 0;
			len++;
		}
		if (new_word && len)
			break ;
		*i = *i + 1;
	}
	ptr = strdup_len_at_i(str, len, *i);
	return (ptr);
}

char	**ft_split(char *str, char c)
{
	int		count;
	char	**arr;
	int		j;
	int		*i;

	i = malloc(sizeof(int));
	if (i == 0 || str == 0)
		return (0);
	arr = 0;
	count = count_words(str, c);
	arr = malloc(sizeof(str) * (count + 1));
	if (arr == 0)
		return (0);
	arr[count] = 0;
	j = 0;
	*i = 0;
	while (j < count)
	{
		arr[j] = get_word_at_i(str, c, i);
		if (arr[j] == 0)
			return (0);
		j++;
	}
	free(i);
	return (arr);
}
