/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:53:21 by shkoh             #+#    #+#             */
/*   Updated: 2025/06/01 22:36:54 by shkoh            ###   ########.fr       */
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

#include <stdio.h>
int main()
{
	t_list	*node1 = ft_lstnew("hello");
	t_list	*head = node1;
	t_list	*node2 = ft_lstnew("test");
	printf("Head address: %p\n", (void *)head);
	printf("Node2 address: %p\n", (void *)node2);
	printf("Node at %p: content: %s, next = %p\n", (void *)head, (char *)head->content, (void *)head->next);
	ft_lstadd_front(&head, node2);
	printf("Node at %p: content: %s, next = %p\n", (void *)head, (char *)head->content, (void *)head->next);
}

/*
t_list **lst because pass in the address of pointer
to the head of the node, &head
t_list *new because ur passing in the pointer
to a new node, node1
*/
