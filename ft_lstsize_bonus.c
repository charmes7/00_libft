/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:41:58 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/02 15:03:11 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
#include <stdio.h>
int main()
{
	t_list	*node;
	t_list	*node2;
	t_list	*head;

	node = ft_lstnew("hello");
	node2 = ft_lstnew("test");
	head = ft_lstnew("head");
	printf("address of head: %p\n", head);
	printf("address of node1: %p\n", node);
	printf("address of node2: %p\n", node2);
	printf("head->next: %p, size: %d\n", head->next, ft_lstsize(head));
	ft_lstadd_front(&head, node);
	printf("head->next: %p, size: %d\n", head->next, ft_lstsize(head));
	ft_lstadd_front(&head, node2);
	printf("head->next: %p, size: %d\n", head->next, ft_lstsize(head));
}
*/
