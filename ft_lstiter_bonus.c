/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkoh <shkoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:35:28 by shkoh             #+#    #+#             */
/*   Updated: 2025/05/24 22:26:02 by shkoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	toUpper(void	*content)
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
}

#include <stdio.h>
int main()
{
	t_list	*node = ft_lstnew(ft_strdup("hi"));
	t_list	*node2 = ft_lstnew(ft_strdup("test"));
	t_list	*node3 = ft_lstnew(ft_strdup("ok"));
	t_list	*head = node;
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	printf("%s\n", (char *)node->content);
	printf("%s\n", (char *)node2->content);
	printf("%s\n", (char *)node3->content);
	ft_lstiter(head, toUpper);
	printf("%s\n", (char *)node->content);
	printf("%s\n", (char *)node2->content);
	printf("%s\n", (char *)node3->content);
}
*/
