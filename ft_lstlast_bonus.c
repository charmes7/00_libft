/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:46:50 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/24 22:26:16 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>
int main()
{
	t_list *null_head = NULL;
	t_list *last_node = ft_lstlast(null_head);
	if (last_node == NULL)
		printf("the head is NULL / empty\n");
	else
		printf("the head is not NULL / empty\n");
	t_list *node1 = ft_lstnew("first");
	t_list *node2 = ft_lstnew("second");
	t_list *node3 = ft_lstnew("third");
	t_list *head = node1; // node 1 is the head
	printf("address 1: %p\n", node1);
	printf("address head: %p\n", head);
	ft_lstadd_front(&head, node2); // add node2 front, node2 is the head
	printf("address 2: %p\n", node2);
	printf("address head: %p\n", head);
	ft_lstadd_front(&head, node3); // add node3 front, node3 is the head
	printf("address 3: %p\n", node3);
	printf("address head: %p\n", head);
	printf("node1->next: %p\n", node1->next);
	printf("node2->next: %p\n", node2->next);
	printf("node3->next: %p\n", node3->next);
	printf("head->next: %p\n", head->next);
	t_list *last = ft_lstlast(head);
	printf("last value: %s, last address: %p\n", (char *)last->content, last);
}
*/
