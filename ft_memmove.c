/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:30:21 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/04 16:32:05 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (s < d && (s + n > d))
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	return (dest);
}

// char buffer[6] = {'A', 'B', 'C', 'D', 'E', 'F'}
// ft_memmove(&buffer[2],  &buffer[0], 4)
// foward copying
// char buffer[6] = {'A', 'B', 'A', 'B', 'A', 'B'}
// backward copying
// char buffer[6] = {'A', 'B', 'A', 'B', 'C', 'D'}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char buffer1[50], buffer2[50];

	strcpy(buffer1, "hello world");
	strcpy(buffer2, "hello world");
	ft_memmove(buffer1 + 6, buffer1, 5);
	memmove(buffer2 + 6, buffer2, 5);
	printf("ft_memmove: %s\nmemmove: %s\n\n", buffer1, buffer2);

	strcpy(buffer1, "hello world");
	strcpy(buffer2, "hello world");
	ft_memmove(buffer1, buffer1 + 6, 5);
	memmove(buffer2, buffer2 + 6, 5);
	printf("ft_memmove: %s\nmemmove: %s\n\n", buffer1, buffer2);

	strcpy(buffer1, "123456789");
	strcpy(buffer2, "123456789");
	ft_memmove(buffer1 + 2, buffer1, 3);
	memmove(buffer2 + 2, buffer2, 3);
	printf("ft_memmove: %s\nmemmove: %s\n\n", buffer1, buffer2);

	strcpy(buffer1, "abcdef");
	strcpy(buffer2, "abcdef");
	ft_memmove(buffer1, buffer1 + 2, 0);
	memmove(buffer2, buffer2 + 2, 0);
	printf("ft_memmove: %s\nmemmove: %s\n\n", buffer1, buffer2);

	strcpy(buffer1, "same buffer");
	strcpy(buffer2, "same buffer");
	ft_memmove(buffer1, buffer1, 5);
	memmove(buffer2, buffer2, 5);
	printf("ft_memmove: %s\nmemmove: %s\n\n", buffer1, buffer2);

	strcpy(buffer1, "");
	strcpy(buffer2, "");
	ft_memmove(buffer1, buffer1, 0);
	memmove(buffer2, buffer2, 0);
	printf("ft_memmove: %s\nmemmove: %s\n\n", buffer1, buffer2);
}
*/
// memmove copies n bytes from src to dest.
// memory areas may overlap
// copying takes place as though the bytes in src
// are first copied into a temporary array that
// does not overlap src or dest, and the bytes
// are then copied from temporary array to dest.
// returns a pointer to dest

// "ABCDE12345"
// memcpy(str + 2, str, 5);
// ABABABAB45
// if it overlaps
// 1. dest is after the src (d > s)
// 2. src + n bytes > dest
