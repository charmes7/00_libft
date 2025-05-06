/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:38:24 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/06 22:18:16 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	j;

	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	j = 0;
	while (src[j] && j < (dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (srcsize);
}
