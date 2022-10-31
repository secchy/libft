/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:30:04 by jheloaho          #+#    #+#             */
/*   Updated: 2022/10/31 19:24:12 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	list = *lst;
	if (*lst != NULL)
	{
		while (list->next != NULL)
		{
			ft_lstdelone(list, del);
			list = list->next;
		}
		ft_lstdelone(list, del);
		*lst = NULL;
	}
}
