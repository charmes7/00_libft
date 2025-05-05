/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:50:12 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/05 19:50:45 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		srclen;
	int		i;
	char	*ptr;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
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
