/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:30:04 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/31 23:07:04 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)str;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char *buf = "hello test";
	char *test;
	char *test1;
	char *test2;

	test = ft_memchr(buf, '\0', ft_strlen(buf) + 1);
	if (test)
		printf("char %c found\n", *test);
	else
		printf("char not found, NULL\n");

	test1 = ft_memchr(buf, 't', ft_strlen(buf) + 1);
	if (test1)
		printf("char %c found\n", *test1);
	else
		printf("char not found, NULL\n");

	test2 = ft_memchr(buf, 'a', ft_strlen(buf) + 1);
	if (test2)
		printf("char %c found\n", *test2);
	else
		printf("char not found, NULL\n");

	return 0;
}
*/
// memchr scans the initial n bytes of the memory area pointed to by str,
// for the first instance of c, both c and bytes of memory area pointed to by s
// are interpreted as unsigned char.
// returns a pointer to the matching byte or NULL if the character is not found.
