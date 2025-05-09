/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:45:31 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/07 14:45:33 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	new_word;

	i = 0;
	count = 0;
	new_word = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
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

char	*ft_extract(char **arr, char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (is_charset(str[i], charset) && str[i])
		i++;
	while (!is_charset(str[i + j], charset) && str[i + j])
		j++;
	*arr = malloc(sizeof(char) * (j + 1));
	if (!*arr)
		return (NULL);
	j = 0;
	while (!is_charset(str[i], charset) && str[i])
	{
		(*arr)[j++] = str[i++];
	}
	(*arr)[j] = '\0';
	return (str + i);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		word_count;

	word_count = count_words(str, charset);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		str = ft_extract(&arr[i], str, charset);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
