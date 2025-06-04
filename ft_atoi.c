/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:36:59 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/04 23:01:10 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	printf("test1: atoi(%d) ft_atoi(%d)\n",
// 		atoi("   42  "), ft_atoi("   42  "));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("   42 3 42"), ft_atoi("   42 3 42"));
// 	printf("test3: atoi(%d) ft_atoi(%d)\n",
// 		atoi("+42"), ft_atoi("+42"));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("-42"), ft_atoi("-42"));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("++42"), ft_atoi("++42"));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("--42"), ft_atoi("--42"));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("+   42  "), ft_atoi("+   42  "));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("-   42  "), ft_atoi("-   42  "));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("    a42  "), ft_atoi("    a42  "));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("   test42"), ft_atoi("   test42"));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("9999999999999999"), ft_atoi("9999999999999999"));
// 	printf("test2: atoi(%d) ft_atoi(%d)\n",
// 		atoi("-9999999999999999"), ft_atoi("-9999999999999999"));
// }

// man atoi
// convert a string to an integer
// errno is not set on error so there is no way to distinguish
// between 0 as an error and as the converted value.
// no check for overflow or underflow are done.
// onle base-10 input can be converted
