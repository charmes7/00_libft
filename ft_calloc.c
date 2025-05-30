/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:20:59 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/30 18:45:33 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
	{
		ptr = malloc(0);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (num > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, num);
	return (ptr);
}

/*
#include <stdio.h>
int main()
{
	char buf[] = "ab";
	void *p = &buf;
	void *p1 = &buf;
	unsigned char *ptr = (unsigned char *)p;
	unsigned char *ptr1 = (unsigned char *)p1;
	printf("Before function\n");
	printf("ft_calloc - Byte 1: 0x%02X, Value: %c\n", ptr[0], *ptr);
	printf("calloc - Byte 1: 0x%02X, Value: %c\n", ptr[0], *ptr);
	ptr++;
	printf("ft_calloc - Byte 2: 0x%02X, Value: %c\n", ptr[1], *ptr);
	printf("calloc - Byte 2: 0x%02X, Value: %c\n", ptr[1], *ptr);
	ptr = ft_calloc(2, 1);
	ptr1 = calloc(2, 1);
	printf("After function\n");
	printf("ft_calloc - Byte 1: 0x%02X, Value: %c\n", ptr[0], *ptr);
	printf("calloc - Byte 1: 0x%02X, Value: %c\n", ptr[0], *ptr);
	printf("ft_calloc - Byte 2: 0x%02X, Value: %c\n", ptr[1], *ptr);
	printf("calloc - Byte 2: 0x%02X, Value: %c\n", ptr[1], *ptr);
}
*/
// calloc function allocates memory for an array of nmemb elements
// of size bytes each and returns a pointer to allocated memory
// memory is set to zero
// if nmemb or size is 0, calloc returns a unique pointer value
// that can later be successfully pased to free().
// if nmemb * size results in int overflow, calloc returns error
