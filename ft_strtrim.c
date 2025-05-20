/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:11:41 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/19 09:11:55 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static void	ft_strfill(size_t len, size_t i, char *str, char const *s1)
{
	size_t	k;

	k = 0;
	while (k < len)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (is_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	if (j > 0)
		j = j - 1;
	while (j > i && is_set(s1[j], set))
		j--;
	if (i >= ft_strlen(s1))
		len = 0;
	else
		len = (j - i) + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strfill(len, i, str, s1);
	return (str);
}

// s1 = "--H-ello---"
// set = "---"
// output = "H-ello"
// trims each character from set from beginning and end,
// as soon as it hits a non set, it stops trimming.
// start from front, check if current index is a set,
// if yes, index++, else, stop.
// start from back, check if current index is a set,
// if yes, index--, else, stop.
// allocate memory to a str,
// length of s1 - indexfront - (strlen(s1) - indexback),
// then copy from index front to index back to a str
