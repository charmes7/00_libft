/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:52:34 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 18:26:43 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(str + i));
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *test;
	char *test2;
	printf("ft_strchr result: %s\n", ft_strchr("hello", 'e'));
	printf("strchr result: %s\n", strchr("hello", 'e'));
	test = ft_strchr("hello", 'a');
	test2 = strchr("hello", 'a');
	if (test)
		printf("ft_strchr result: %s\n", test);
	else
		printf("ft_strchr result: NULL\n");
	if (test2)
		printf("strchr result: %s\n", test2);
	else
		printf("strchr result: NULL\n");
	printf("ft_strchr result: %s\n", ft_strchr("hello", '\0'));
	printf("strchr result: %s\n", strchr("hello", '\0'));
	printf("ft_strchr result: %s\n", ft_strchr("hello", 'o'));
	printf("strchr result: %s\n", strchr("hello", 'o'));
}
*/
// The strchr() return a pointer to the matched character  or
// NULL  if the character is not found.  The terminating null byte
// is considered part of the string, so that if c is specified
// as '\0', these functions return a pointer to the terminator.
