/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:04:25 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/24 22:25:46 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*
void	del_lstcontent(void *content)
{
	free(content);
}

#include <stdio.h>
int main()
{
	// IOT instruction (core dumped)
	// because ft_lstnew("first") is a string literal
	// means read-only, cannot free()
	// solution - strdup
	//t_list	*node = ft_lstnew("first");
	//t_list	*node2 = ft_lstnew("second");
	t_list	*node = ft_lstnew(ft_strdup("first"));
	t_list	*node2 = ft_lstnew(ft_strdup("second"));
	t_list	*head = node;
	ft_lstadd_back(&head, node2);
	printf("Before deletion: content = %s\n", (char *)node2->content);
	ft_lstdelone(node2, del_lstcontent);
	// node2 is now freed, derefencing causes undefined behaviour
	// safe option is to clear the dangling pointer
	node2 = NULL;
	printf("node->next: %p\n", node->next); // node points to node2
	printf("node2 address: %p\n", node2);
	// printf("node2->next: %p\n", node2->next);
	// printf("node2 value: %s\n", (char *)node2->content);
}
*/
