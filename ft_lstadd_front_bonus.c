/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:53:21 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/02 14:15:14 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
int main()
{
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
}
*/
/*
t_list **lst because pass in the address of pointer
to the head of the node, &head
t_list *new because ur passing in the pointer
to a new node, node1
*/
