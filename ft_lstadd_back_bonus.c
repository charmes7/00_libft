/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:57:22 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/24 22:24:45 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}

/*
#include <stdio.h>
int main()
{
	// head = node;
	// ft_lstadd_back(&head, node) causes an error
	// what about NULL
	t_list	*head;
	t_list	*null_head;
	t_list	*null_node;
	t_list	**null_lst;
	t_list	*testnode = ft_lstnew("test");
	t_list	*node = ft_lstnew("first");
	t_list	*node2 = ft_lstnew("second");
	t_list	*node3 = ft_lstnew("third");
	head = node; // node is the head.
	null_head = NULL;
	null_node = NULL;
	null_lst = NULL;
	ft_lstadd_back(null_lst, node); // return ;
	ft_lstadd_back(&head, null_node); // return ;
	ft_lstadd_back(&null_head, testnode); // makes the testnode the new head
	if (null_head == NULL)
		printf("the null_head is still NULL\n");
	else
	{
		printf("null_head is now testnode, proof: %s\n",
		(char *)null_head->content);
	}
	printf("node: %p head: %p\n", node, head);
	ft_lstadd_back(&head, node2);
	printf("node2: %p head: %p\n", node2, head);
	ft_lstadd_back(&head, node3);
	printf("node3: %p head: %p\n", node3, head);
	printf("node->next: %p\n", node->next);
	printf("node2->next: %p\n", node2->next);
	printf("node3->next: %p\n", node3->next);
}
*/
