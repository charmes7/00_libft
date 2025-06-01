/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:38:24 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 19:01:13 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}

/*
#include <stdio.h>
#include <string.h>
int main() {
    {
        char dst[20];
        size_t res = ft_strlcpy(dst, "Hello, World!", sizeof(dst));
        printf("[1] dst: '%s', return: %zu\n", dst, res);
    }
    {
        char dst[6];
        size_t res = ft_strlcpy(dst, "Hello, World!", sizeof(dst));
        printf("[2] dst: '%s', return: %zu\n", dst, res);
    }
    {
        char dst[5] = "XXXX";
        size_t res = ft_strlcpy(dst, "Hello", 0);
        printf("[3] dst unchanged: '%s', return: %zu\n", dst, res);
    }
    {
        char dst[10] = "Original";
        size_t res = ft_strlcpy(dst, "", sizeof(dst));
        printf("[4] dst after empty src: '%s', return: %zu\n", dst, res);
    }
    {
        char dst[10] = "XXXX";
        size_t res = ft_strlcpy(dst, "Hello", 1);
        printf("[5] dst: '%s', return: %zu\n", dst, res);
    }
}
*/
