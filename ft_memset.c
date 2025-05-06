/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 07:41:53 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/06 07:58:19 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	unsigned char	*temp;

	temp = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		*temp = (unsigned char)value;
		temp++;
		i++;
	}
	return (ptr);
}
