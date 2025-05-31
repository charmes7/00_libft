/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:44:41 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 05:13:10 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *res;
	char *res1;
	char *res2;
	char *res3;
	char *res4;
	char *res5;
	char dest[15] = "hi hello";
	char dest1[15] = "hi hello";
	char dest2[15] = "hi hello";
	char dest3[15] = "hi hello";
	char dest4[15] = "hi hello";
	char dest5[15] = "hi hello";
	const char *src = "ok";
	const char *src1 = "ok";

	res = ft_memcpy(dest, src, 2);
	res1 = memcpy(dest1, src1, 2);
	printf("ft_memcpy:%s\n", res);
	printf("memcpy:%s\n", res1);
	res2 = ft_memcpy(dest2 + 3, dest2, 5);
	res3 = memcpy(dest3 + 3, dest3, 5);
	printf("ft_memcpy:%s\n", res2);
	printf("memcpy:%s\n", res3);
	res4 = ft_memcpy(dest4, dest4 + 3, 5);
	res5 = memcpy(dest5, dest5 + 3, 5);
	printf("ft_memcpy:%s\n", res4);
	printf("memcpy:%s\n", res5);
}
*/
// memcpy copies n bytes from src to dst,
// memory areas must not overlap.
// use memmove if memory areas overlap.
// memcpy returns a pointer to dest.
// undefined behavior if memory areas overlap
