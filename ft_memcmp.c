/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:00:00 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/31 23:47:57 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	printf("s1:%s\ns2:%s\ndiff:%d\n expected diff:%d\n",
		"aa", "ab", ft_memcmp("aa", "ab", 2), memcmp("aa", "ab", 2));
	printf("s1:%s\ns2:%s\ndiff:%d\n expected diff:%d\n",
		"aa", "aa", ft_memcmp("aa", "aa", 2), memcmp("aa", "aa", 2));
	printf("s1:%s\ns2:%s\ndiff:%d\n expected diff:%d\n",
		"ba", "aa", ft_memcmp("ba", "aa", 2), memcmp("ba", "aa", 2));
}
*/
// memcmp compares first n bytes (interpreted as unsigned char)
// of memory areas s1 and s2
// returns an integer less than, equal to, or greater than zero
// if the first n bytes of s1 is found,
