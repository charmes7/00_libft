/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:30:48 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/30 18:26:43 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
//#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
int main()
{
	void	*ptr;
	int		n;
	char buf[] = "ab";

	n = 42;
	ptr = &n;
	unsigned char *p = (unsigned char *)ptr;
	unsigned char *p1 = (unsigned char *)buf;
	unsigned char *p2 = (unsigned char *)ptr;
	unsigned char *p3 = (unsigned char *)buf;
	printf("First byte: 0x%02X\nFirst value:%d\n", p[0], *p);
	printf("First byte: 0x%02X\nFirst value:%c\n", p1[0], *p1);
	ft_bzero(p, sizeof(n));
	bzero(p2, sizeof(n));
	ft_bzero(p1, sizeof(buf));
	bzero(p3, sizeof(buf));
	printf("Second byte: 0x%02X\nSecond value:%d\n", p[1], *p);
	printf("Second byte: 0x%02X\nSecond value:%c\n", p1[1], *p1);
	printf("Expected Second byte: 0x%02X\nSecond value:%d\n", p2[1], *p2);
	printf("Expected econd byte: 0x%02X\nSecond value:%c\n", p3[1], *p3);
}
*/
// zero a byte string
// function erases the data in the n bytes of the memory
// starting at the location pointed to by s,
// by writing zeros (bytes containing '\0') to that area.
// 0 and '\0' are the same when used as a byte
