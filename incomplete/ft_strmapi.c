/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:13:37 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/20 10:36:39 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			strlen;
	unsigned int	i;

	strlen = ft_strlen(s);
	str = malloc(sizeof(char) * (strlen + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < strlen)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// apply function f which takes in a parameter of index of s and char of s
// store the results into a string and return.
