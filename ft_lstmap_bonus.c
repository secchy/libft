/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:03:52 by jheloaho          #+#    #+#             */
/*   Updated: 2022/11/09 20:29:10 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
			ft_lstclear(&new, del);
		ft_lstadd_back(&new, tmp);
	}
	return (new);
}
