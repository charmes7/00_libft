/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:46:03 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 19:07:13 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	j = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*
#include <string.h>
#include <stdio.h>
int main() {
    {
        char s1[11] = "";
        char s2[11] = "";
        size_t r1 = strlcat(s1, "World!", sizeof(s1));
        size_t r2 = ft_strlcat(s2, "World!", sizeof(s2));
        printf("Empty dst:\nstrlcat s1: '%s', return: %zu\nft_strlcat s2: '%s',
		return: %zu\n\n", s1, r1, s2, r2);
    }
    {
        char s1[11] = "Hello";
        char s2[11] = "Hello";
        size_t r1 = strlcat(s1, "World!", 0);
        size_t r2 = ft_strlcat(s2, "World!", 0);
        printf("Zero size:\nstrlcat s1: '%s', return: %zu\nft_strlcat s2: '%s',
		return: %zu\n\n", s1, r1, s2, r2);
    }
    {
        char s1[11] = "Hello";
        char s2[11] = "Hello";
        size_t r1 = strlcat(s1, "World!", 3);
        size_t r2 = ft_strlcat(s2, "World!", 3);
        printf("Size < dst length:\nstrlcat s1: '%s',
		return: %zu\nft_strlcat s2: '%s',
		return: %zu\n\n", s1, r1, s2, r2);
	}
    {
        char s1[6] = "Hello";
        char s2[6] = "Hello";
        size_t r1 = strlcat(s1, "World!", sizeof(s1));
        size_t r2 = ft_strlcat(s2, "World!", sizeof(s2));
        printf("Size = dst length + 1:\nstrlcat s1: '%s',
		return: %zu\nft_strlcat s2: '%s',
		return: %zu\n\n", s1, r1, s2, r2);
    }
}
*/
// Copy and catenate the src string into a dst string
// If the dst buffer, limited by its size, is not large enough
// the resulting string is truncated (but guaranteed to be '\0')
// return the length of the total string they tried to create.
