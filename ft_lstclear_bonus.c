/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:10:05 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/24 22:25:29 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
}

/*
void	del_lstcontent(void *content)
{
	free(content);
}

#include <stdio.h>
int main()
{
	t_list	*node = ft_lstnew(ft_strdup("test"));
	t_list	*node2 = ft_lstnew(ft_strdup("hello"));
	t_list	*node3 = ft_lstnew(ft_strdup("hi"));
	t_list	*head = node;
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstclear(&head, del_lstcontent);
	printf("%p\n", head);
}
*/
// **lst = &head
// del function deletes content of the node.
// delete node, free(node) and every successor
