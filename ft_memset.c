/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 07:41:53 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 05:43:19 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (num > 0)
	{
		*p = (unsigned char)value;
		p++;
		num--;
	}
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char buffer1[20] = "Hello, World!";
    char buffer2[20] = "Hello, World!";

    ft_memset(buffer1, '*', 5);
    memset(buffer2, '*', 5);
    printf("ft_memset result: %s\n", buffer1);
    printf("memset result: %s\n", buffer2);
    ft_memset(buffer1, 0, sizeof(buffer1));
    memset(buffer2, 0, sizeof(buffer2));
    printf("ft_memset zeroed buffer: '%s'\n", buffer1);
    printf("memset zeroed buffer: '%s'\n", buffer2);
}
*/
// memset fills the first n bytes of memory area
// pointed to by s with the constant byte c
// returns pointer to memory area s
