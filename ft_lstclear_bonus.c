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
	t_list	*next_node;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
}

/*
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;
	t_list	*ptr;

	if (!lst || !*lst)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		next_node = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = next_node;
	}
	*lst = NULL;
}
*/
// **lst = &ptr , ptr is pointing to a node
// del function deletes content of the node.
// delete node, free(node) and every successor
// pointer to the list set to null, lst = NULL;
