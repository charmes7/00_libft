/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:19:39 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 18:36:03 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			slen;

	slen = ft_strlen(s);
	i = 0;
	while (i < slen)
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include <ctype.h>
void print_and_uppercase(unsigned int i, char *c)
{
    printf("Index %u: %c -> ", i, *c);
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;  // Or use *c = toupper(*c);
    printf("%c\n", *c);
}

int main(void)
{
    char str[] = "hello, 42!";

    printf("Original string: %s\n", str);
    ft_striteri(str, print_and_uppercase);
    printf("Modified string: %s\n", str);

    return 0;
}
*/
