/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:03:52 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/31 22:20:01 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	if (!lst || !f || !del)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	head = new;
	lst = lst->next;
	while (lst->next != NULL)
	{
		new->next = ft_lstnew(f(lst->content));
		if (!new->next)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		new = new->next;
		lst = lst->next;
	}
	new->next = ft_lstnew(f(lst->content));
	new = new->next;
	new->next = NULL;
	return (head);
}
