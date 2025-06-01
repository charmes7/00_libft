/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:50:12 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 18:36:25 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		srclen;
	int		i;
	char	*ptr;

	srclen = ft_strlen(src);
	ptr = malloc(sizeof(char) * (srclen + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < srclen)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("ft_strdup expected: %s\n", ft_strdup("hello"));
	printf("strdup expected: %s\n", strdup("hello"));
	printf("ft_strdup expected: %s\n", ft_strdup(""));
	printf("strdup expected: %s\n", strdup(""));
	printf("ft_strdup expected: %s\n", ft_strdup("  	"));
	printf("strdup expected: %s\n", strdup("  	"));
}
*/
// The  strdup()  function  returns a pointer to a new string
// which is a duplicate of the string s.  Memory for the new
// string is obtained with malloc,  and  can  be freed.
// On success, the strdup() function returns a pointer to the
// duplicated string.   It returns  NULL if insufficient memory
// was available, with errno set to indicate the error.
