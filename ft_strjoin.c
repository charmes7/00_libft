/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:56:22 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/02 14:14:31 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_string(char *str, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2len)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	fill_string(str, s1, s2);
	return (str);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strjoin("Hello ", "World"));
	printf("%s\n", ft_strjoin("Hello ", ""));
	printf("%s\n", ft_strjoin("", "World"));
	printf("%s\n", ft_strjoin("Hello ", NULL));
	printf("%s\n", ft_strjoin(NULL, "World"));
	if(!ft_strjoin(NULL, NULL))
		printf("NULL\n");
}
*/
