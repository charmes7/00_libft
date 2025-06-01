/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:10:44 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 19:13:37 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ptr = malloc(sizeof(char) * 1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}

// char *s = "Hello";
// unsigned int start = 3;
// size_t len = 10;
// since 3 + 10 (13) > 5
// len = 5 - 3 = 2
/*
#include <stdio.h>
int main(void)
{
    char *result;
    result = ft_substr("Hello, World!", 7, 5);
    printf("Expected: 'World', Got: '%s'\n", result);
    free(result);
    result = ft_substr("42KL", 0, 2);
    printf("Expected: '42', Got: '%s'\n", result);
    free(result);
    result = ft_substr("Piscine", 3, 10);
    printf("Expected: 'cine', Got: '%s'\n", result);
    free(result);
    result = ft_substr("Short", 10, 3);
    printf("Expected: '', Got: '%s'\n", result);
    free(result);
    result = ft_substr("Nothing", 3, 0);
    printf("Expected: '', Got: '%s'\n", result);
    free(result);
    result = ft_substr("", 0, 5);
    printf("Expected: '', Got: '%s'\n", result);
    free(result);
    result = ft_substr(NULL, 0, 3);
    printf("Expected: (null), Got: %s\n", result);
}
*/
