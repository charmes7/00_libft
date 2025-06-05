/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 18:17:13 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/05 19:30:59 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

static int	count_word(char const *s, char c)
{
	int		i;
	int		new_word;
	int		count;

	i = 0;
	count = 0;
	new_word = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			new_word = 0;
			i++;
		}
		else
		{
			if (new_word == 0)
			{
				new_word = 1;
				count++;
			}
			i++;
		}
	}
	return (count);
}

static char const	*ft_extract(char **arr, char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i + j] && s[i + j] != c)
		j++;
	*arr = malloc(sizeof(char) * (j + 1));
	if (!(*arr))
		return (NULL);
	j = 0;
	while (s[i + j] && s[i + j] != c)
	{
		(*arr)[j] = s[i + j];
		j++;
	}
	(*arr)[j] = '\0';
	return (s + (i + j));
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		s = ft_extract(&(arr[i]), s, c);
		if (!s)
		{
			free_split(arr, i);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str = "Hello!";
	char delimiter = '\0';
	char **result = ft_split(str, delimiter);
	int i = 0;

	if (!result)
	{
		printf("ft_split returned NULL.\n");
		return (1);
	}

	while (result[i])
	{
		printf("result[%d]: %s\n", i, result[i]);
		i++;
	}
	free_split(result);
	return (0);
}
*/
