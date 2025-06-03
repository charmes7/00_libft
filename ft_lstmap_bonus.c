/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:39:43 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/24 22:26:34 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	t_list	*ptr;

	if (lst == NULL)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	ptr = head;
	lst = lst->next;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ptr->next = node;
		ptr = node;
		lst = lst->next;
	}
	return (head);
}

/*
void	del_lstcontent(void *content)
{
	free(content);
}

void	*toUpper(void	*content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return ((void *)str);
}

#include <stdio.h>
int main()
{
	t_list	*node = ft_lstnew(ft_strdup("hi"));
	t_list	*node2 = ft_lstnew(ft_strdup("test"));
	t_list	*node3 = ft_lstnew(ft_strdup("ok"));
	t_list	*new_head;
	t_list	*head = node;
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	printf("%s\n", (char *)node->content);
	printf("%s\n", (char *)node2->content);
	printf("%s\n", (char *)node3->content);
	new_head = ft_lstmap(head, toUpper, del_lstcontent);
	printf("%s\n", (char *)new_head->content);
	printf("%s\n", (char *)new_head->next->content);
	printf("%s\n", (char *)new_head->next->next->content);
}
*/
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
