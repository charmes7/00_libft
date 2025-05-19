/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:10:44 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/19 09:11:16 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (len - 1))
	{
		ptr[i++] = s[start++];
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
int main()
{
    printf("%s\n", ft_substr("Hello World", 0, 4));
}
*/
// if s = "Hello World"
// start (starting index in s) = 3
// len (maximum length) = 4
// output : (lo W)? or (lo \n)?
