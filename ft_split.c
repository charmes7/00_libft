/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:45:31 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/19 09:15:20 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	new_word;

	i = 0;
	count = 0;
	new_word = 0;
	while (str[i])
	{
		if (is_charset(str[i], c))
			new_word = 0;
		else
		{
			if (new_word == 0)
			{
				count++;
				new_word = 1;
			}
		}
		i++;
	}
	return (count);
}

static char	*ft_extract(char **arr, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (is_charset(str[i], c) && str[i])
		i++;
	while (!is_charset(str[i + j], c) && str[i + j])
		j++;
	*arr = malloc(sizeof(char) * (j + 1));
	if (!*arr)
		return (NULL);
	j = 0;
	while (!is_charset(str[i], c) && str[i])
	{
		(*arr)[j++] = str[i++];
	}
	(*arr)[j] = '\0';
	return (s + i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		word_count;

	word_count = count_words(s, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		s = ft_extract(&arr[i], s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
